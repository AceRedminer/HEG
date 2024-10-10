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
    }else
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
