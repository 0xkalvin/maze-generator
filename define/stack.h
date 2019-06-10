
#ifndef STACK_H
#define STACK_H

#include "dll.h"

struct Stack{
    struct Dll *p;
    int top;
};


struct Dll *mallocList();
//void createStack(struct Stack *s);
void push(struct Stack *s, int value);
void pop(struct Stack *s);
int getTop(struct Stack *s);
void printStack(struct Stack *s);



#endif
