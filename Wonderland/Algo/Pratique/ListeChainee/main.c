#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _element {
  int data;
  struct _element *next;
} element;

typedef element *stack;

// Stacks Chainee
bool stack_is_empty(stack s) // return NULL == stack;
{
  return NULL == s;
}

void stack_create(stack *s) // *s = NULL;
{
  *s = NULL;
}

void stack_push(stack *s, int val) {
  element *e = malloc(sizeof(*e));
  e->data = val;
  e->next = *s;
  *s = e;
}

void stack_pop(stack *s, int *val) {
  element *tmp = *s;
  element *prec = NULL;
  while (tmp->data != *val && !stack_is_empty(tmp->next)) {
    prec = tmp;
    tmp = tmp->next;
  }
  prec->next = tmp->next;
  free(tmp);
}

void stack_peek(stack s, int *val) { *val = s->data; }

void stack_does_exist(stack s, int *val) {
  element *tmp = s;
  while (tmp->data != *val && !stack_is_empty(tmp->next)) {
    tmp = tmp->next;
  }
  if (tmp->data == *val) {
    printf("%d does exist ! \n", *val);
  } else {
    printf("%d doesn't exist ! \n", *val);
  }
}

void stack_destroy(stack *s) {
  while (!stack_is_empty(*s)) {
    int val;
    stack_pop(s, &val);
  }
}

void print_stack(stack s) {
  while (!stack_is_empty(s)) {
    printf("%d -> ", s->data);
    s = s->next;
  }
  printf("NULL\n");
}

int stacks_chained(int argc, int val_to_search) {
  stack s = malloc(sizeof(*s));
  stack_create(&s);
  stack_push(&s, 10);
  stack_push(&s, 3);
  stack_push(&s, 7);
  stack_push(&s, 8);
  if (argc == 2) {
    int val = val_to_search;
    stack_does_exist(s, &val);
  }
  int peeked_val;
  stack_peek(s, &peeked_val);
  printf("Peek = %d \n", peeked_val);
  print_stack(s);
  stack_destroy(&s);
  return EXIT_SUCCESS;
}

int main(int argc, char const *argv[]) { stacks_chained(argc, atoi(argv[1])); }
