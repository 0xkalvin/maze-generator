
#include "stack.h"

struct Dll *mallocList(){
    struct Dll *p = (struct Dll*)malloc(sizeof(struct Dll));
    createList(p);
    return p;
}

// void createStack(struct Stack *s){
//     s->p = mallocList();
// }

void push(struct Stack *s, int value){
    insertAtTail(s->p, value);
}

void pop(struct Stack *s){
    removeTail(s->p);
}

void printStack(struct Stack *s){
    printList(s->p);
}