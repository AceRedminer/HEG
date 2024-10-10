#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

typedef struct component
{
    char c;
    int priority;
} component_t;

typedef struct _stack
{
    component_t *data;
    int top;
    int capacity;
} _stack_t;

bool is_empty(_stack_t *s) // pas 
{
    return s->top == -1;
}

void *stack_init(_stack_t *s, int capacity)
{
    s->top = -1;
    s->capacity = capacity;
    return s->data = calloc(capacity, s->capacity * sizeof(*s->data));
}

void stack_push(_stack_t *s, component_t val_to_push)
{
    if (s->top + 1 < s->capacity)
    {
        s->data[++s->top] = val_to_push;
    }
    else
    {
        size_t new_size = ((s->capacity) * sizeof(*s->data)) + (s->capacity * (sizeof(*s->data) / 2)) - 1;
        s->data = realloc(s->data, new_size);
        s->capacity = new_size / sizeof(*s->data);
        s->data[++s->top] = val_to_push;
    }
}

component_t stack_pop(_stack_t *s)
{
    int new_size = (s->capacity * sizeof(*s->data) / 2);
    if (s->top - 1 < s->capacity / 2)
    {
        s->data = realloc(s->data, new_size);
        s->capacity = new_size / sizeof(*s->data);
        s->top = s->capacity - 1;
    }
    else
    {
        s->capacity--;
    }
    return s->data[s->top--];
}

component_t stack_peek(_stack_t *s)
{
    return s->data[s->top];
}

void stack_print_data(_stack_t *s)
{
    for (int i = 0; i < s->capacity; i++)
    {
        assert(!is_empty(s));
        printf("%c\n", s->data[(s->capacity - 1) - i].c);
    }
}

void *stack_destroy(_stack_t *s)
{
    s->top = -1;
    free(s->data);
    return NULL;
}

size_t string_len(char *str)
{
    size_t i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool is_operand(char c)
{
    return (c >= 40 && c <= 47) || c == 94;
}

int char_type(char c) // je pense inutile avec component
{
    return (c == 40 || c == 41) /*les parentheses*/ ? 0 : (((c >= 42 && c <= 47) || c == 94) /*les operandes*/ ? 1 : /*les operateurs*/ 2);
}

int infix_to_postfix(_stack_t *infix, _stack_t *postfix, size_t inf_pos_len)
{
    _stack_t tmp_stack;
    tmp_stack.data = stack_init(&tmp_stack, inf_pos_len);
    for (size_t i = 0; i < inf_pos_len; i++)
    {
        component_t current_component = stack_pop(infix);
        if (current_component.priority == -1)
        {
            stack_push(postfix, current_component);
            //stack_print_data(postfix);
        }
        else
        {
            if (current_component.c == '(')
            {
                stack_push(&tmp_stack, current_component);
            }
            else
            {
                int tmp_priority = !is_empty(&tmp_stack) ? stack_pop(&tmp_stack).priority : -1;
                while (tmp_priority < current_component.priority && !is_empty(infix) && current_component.priority != -1)
                {
                    if (current_component.c == ')')
                    {
                        while (tmp_stack.data[tmp_stack.top].c != '(')
                        {
                            stack_push(postfix, stack_pop(&tmp_stack));
                            break;
                        }
                        break;
                    }else
                    {
                        stack_push(&tmp_stack, current_component);
                    }
                    
                    component_t last_popped_component = stack_pop(&tmp_stack);
                    stack_push(postfix, last_popped_component);
                }
                if (!is_empty(&tmp_stack))
                {
                    stack_push(&tmp_stack, current_component);
                    //stack_print_data(&tmp_stack);
                }
                else
                {
                    stack_push(postfix, current_component);
                    //stack_print_data(postfix);
                }
                // problem with priority or push of stupid data, check pop push and do a pseudo code
            }
        }
    }
    stack_destroy(&tmp_stack);
    return 0;
}

void char_to_component(char *calculus, _stack_t *infix)
{
    for (size_t i = 0; i < string_len(calculus); i++)
    {
        component_t comp;
        comp.c = calculus[i];
        comp.priority = (comp.c >= 49 && comp.c <= 57) ? -1 : ((comp.c == 40 || comp.c == 41) ? 0 : ((comp.c == 43 || comp.c == 45) ? 1 : ((comp.c == 42 || comp.c == 47 ? 2 : 3)))); // vérfier si -1 est la priorité corecte pour les opérandes
        stack_push(infix, comp);
    }
}

int main(void) // Error with s.top qui se mets pas a jour je crois et verifier stack_push; adapter lib stacks pour component_t
{
    char *str_infix = "2+3*5*(1/8)^3-2";
    int str_infix_len = string_len(str_infix);

    _stack_t infix;
    infix.data = stack_init(&infix, str_infix_len);

    char_to_component(str_infix, &infix);
    _stack_t postfix;
    postfix.data = stack_init(&postfix, str_infix_len);

    printf("%s", infix_to_postfix(&infix, &postfix, str_infix_len) == 0 ? "Tout c'est bien passé" : "Oh shit here we go again");

    stack_destroy(&infix);
    stack_destroy(&postfix);

    return 0;
}
