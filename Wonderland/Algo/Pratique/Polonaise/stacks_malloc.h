#ifndef _STACKS_MALLOC_
#define _STACKS_MALLOC_

#include <stdbool.h>

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

bool is_empty(_stack_t *s);

void *stack_init(_stack_t *s, int capacity);

void stack_push(_stack_t *s, component_t val_to_push);

component_t stack_pop(_stack_t *s);

component_t stack_peek(_stack_t *s);

void stack_push_data(_stack_t *s, int nb_element_to_push);

void stack_pop_data(_stack_t *s, int nb_element_to_pop);

void stack_print_data(_stack_t *s);

void *stack_destroy(_stack_t *s);

#endif
