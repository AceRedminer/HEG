#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

typedef struct stack
{
    int *data;
    int top;
    int capacity;
} _stack_t;

// Stacks statique

bool is_empty(_stack_t *s)
{
    return s->top == -1;
}

void *stack_init(_stack_t *s, int capacity)
{
    s->top = -1;
    s->capacity = capacity;
    return s->data = malloc(s->capacity * sizeof(*s->data));
}

void stack_push(_stack_t *s, int val_to_push)
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

int stack_pop(_stack_t *s)
{
    int new_size = (s->capacity * sizeof(*s->data) / 2);
    if (s->top - 1 < s->capacity / 2)
    {
        s->data = realloc(s->data, new_size);
        s->capacity = new_size / sizeof(*s->data);
        s->top = s->capacity - 1;
    }else
    {
        s->capacity--;
    }
    return s->data[s->top--];
}

int stack_peek(_stack_t *s)
{
    return s->data[s->top];
}

void stack_push_data(_stack_t *s, int nb_element_to_push)
{
    for (int i = 0; i < nb_element_to_push; i++)
    {
        stack_push(s, i);
    }
}

void stack_pop_data(_stack_t *s, int nb_element_to_pop)
{
    for (int i = 0; i < nb_element_to_pop; i++)
    {
        if (!is_empty(s))
        {
            stack_pop(s);
        }
    }
}

void stack_print_data(_stack_t *s)
{
    for (int i = 0; i < s->capacity; i++)
    {
        assert(!is_empty(s));
        printf("%d\n", s->data[(s->capacity - 1) - i]);
    }
}

void *stack_destroy(_stack_t *s)
{
    s->top = -1;
    free(s->data);
    return NULL;
}

int main()
{
    _stack_t my_stack;
    int capacity = 5;
    my_stack.data = stack_init(&my_stack, capacity);

    printf("%s \n", is_empty(&my_stack) ? "La stack est vide" : "La stack est pas vide");

    stack_push_data(&my_stack, 10);
    stack_print_data(&my_stack);

    int top_val = stack_peek(&my_stack);
    printf("Peek result = %d \n", top_val);

    int popped_val = stack_pop(&my_stack);
    printf("Popped : %d \n", popped_val);
    stack_print_data(&my_stack);

    top_val = stack_peek(&my_stack);
    printf("Peek result = %d \n", top_val);

    stack_pop_data(&my_stack, 5);
    stack_print_data(&my_stack);

    printf("%s \n", is_empty(&my_stack) ? "La stack est vide" : "La stack est pas vide");

    my_stack.data = stack_destroy(&my_stack);
    printf("%s \n", !my_stack.data ? "La pile a été free" : "Problème de free");

    return 0;
}
