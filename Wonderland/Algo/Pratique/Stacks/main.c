#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define MAX_CAPACITY 10

typedef struct stack
{
    int data[MAX_CAPACITY];
    int top;
} _stack_t;

bool is_empty(_stack_t *s)
{
    return s->top == -1;
}

void stack_init(_stack_t *s)
{
    s->top = -1;
}

void stack_push(_stack_t *s, int val_to_push)
{
    assert(s->top+1 < MAX_CAPACITY);
    s->data[++s->top] = val_to_push;
}

int stack_pop(_stack_t *s)
{
    assert(!is_empty(s));
    return s->data[s->top--];
}

int stack_peek(_stack_t *s)
{
    assert(!is_empty(s));
    return s->data[s->top];
}

int stack_length(_stack_t *s)
{
    return s->top + 1;
}

void stack_push_data(_stack_t *s, int nb_element_to_push)
{
    for (int i = 0; i < nb_element_to_push; i++)
    {
        stack_push(s, i);
    }
}

void stack_print_data(_stack_t *s)
{
    int max = stack_length(s);
    for (int i = 0; i < max; i++)
    {
        assert(!is_empty(s));
        printf("%d\n", s->data[(max-1)-i]);
    }
}

int main()
{
    _stack_t my_stack;
    stack_init(&my_stack);
    printf("%s \n", is_empty(&my_stack) ? "La stack est vide" : "La stack est pas vide");
    stack_push_data(&my_stack, 10);
    stack_print_data(&my_stack);
    int top_val = stack_peek(&my_stack);
    printf("Peek result = %d \n", top_val);
    int pop_val = stack_pop(&my_stack);
    printf("Popped value = %d \n", pop_val);
    top_val = stack_peek(&my_stack);
    printf("Peek result = %d \n", top_val);
    printf("%s \n", is_empty(&my_stack) ? "La stack est vide" : "La stack est pas vide");
    return 0;
}
