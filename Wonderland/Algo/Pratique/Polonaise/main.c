#include <stdlib.h>
#include <stdio.h>
#include "stacks_malloc.h"

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
    return (c >= '(' && c <= '/') || c == '^';
}

int char_type(char c) // je pense inutile avec component
{
    return (c == '(' || c == ')')
    ? 0
    : (((c >= '+' && c <= '/') || c == '^')
        ? 1
        : 2);
}

int infix_to_postfix(_stack_t *infix, _stack_t *postfix, size_t inf_pos_len)
{
    printf("%c", stack_pop(infix).c);
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
                while (tmp_stack.data[tmp_stack.top].priority < current_component.priority && !is_empty(infix) && !is_empty(&tmp_stack) && current_component.priority != -1)
                {
                    stack_push(&tmp_stack, current_component);
                    if (current_component.c == ')')
                    {
                        while (tmp_stack.data[tmp_stack.top].c != '(')
                        {
                            stack_push(postfix, stack_pop(&tmp_stack));
                            break;
                        }
                        break;
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

int char_to_int(char c){
    return c - 48;
}

double evaluate_postfix(component_t *postfix, int count_postfix){
    //tmp_stack doit etre une stack de int
    _stack_t tmp_stack;
    tmp_stack.data = malloc(10 * sizeof(*postfix));
    for (size_t i = 0; i < count_postfix; i++)
    {
        if (postfix[i].priority == -1)
        {
            stack_push(&tmp_stack, postfix[i]);
        }else
        {
            component_t rhs = stack_pop(&tmp_stack);
            component_t lhs = stack_pop(&tmp_stack);
            switch (postfix[i].c)
            {
            case '+':
                stack_push(&tmp_stack, char_to_int(postfix[i].c));
                break;
            
            default:
                break;
            }
        }
        
        
    }
    
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
