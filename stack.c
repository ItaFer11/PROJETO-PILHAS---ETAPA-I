
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* new_stack(int size) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->items = (int*)malloc(size * sizeof(int));
    s->top = -1;
    s->max_size = size;
    return s;
}

void stack_push(Stack* s, int value) {
    if (s->top == s->max_size - 1) {
        printf("A pilha está cheia! Não é possível adicionar o valor %d.\n", value);
        return;
    }
    s->items[++s->top] = value;
}

int stack_pop(Stack* s) {
    if (s->top == -1) {
        printf("A pilha está vazia! Não há elementos para remover.\n");
        return -1;
    }
    return s->items[s->top--];
}

void stack_print(Stack* s) {
    if (s->top == -1) {
        printf("A pilha está vazia.\n");
        return;
    }
    printf("Pilha: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int stack_is_empty(Stack* s) {
    return s->top == -1;
}

void free_stack(Stack* s) {
    free(s->items);
    free(s);
}
