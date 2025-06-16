
#ifndef STACK_H
#define STACK_H

typedef struct stack {
    int *items;
    int top;
    int max_size;
} Stack;

Stack* new_stack(int size);
void stack_push(Stack* s, int value);
int stack_pop(Stack* s);
void stack_print(Stack* s);
int stack_is_empty(Stack* s);
void free_stack(Stack* s);

#endif
