#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "node.h"

#ifndef DLL_H
#define DLL_H


struct Dll{
    struct Node *head;
    struct Node *tail;

};

struct Node* mallocNode(int value);
void createList(struct Dll *p);
bool isEmpty(struct Dll *p);
void insertAtTail(struct Dll *p, int value);
void insertAtHead(struct Dll *p, int value);
void removeTail(struct Dll *p);
void removeHead(struct Dll *p);
void printList(struct Dll *p);


#endif
