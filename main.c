
#include <stdio.h>
#include "stack.h"

int main() {
    Stack* s = new_stack(5);

    stack_push(s, 10);
    stack_push(s, 20);
    stack_push(s, 30);

    stack_print(s);

    printf("Elemento retirado: %d\n", stack_pop(s));
    stack_print(s);

    printf("Elemento retirado: %d\n", stack_pop(s));
    stack_print(s);

    if (stack_is_empty(s)) {
        printf("A pilha está vazia.\n");
    } else {
        printf("A pilha ainda possui elementos.\n");
    }

    free_stack(s);
    return 0;
}
