#include "dll.h"


struct Node* mallocNode(int value) {
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->value = value;
	newNode->next =	newNode->prev = NULL;
	return newNode;
}


void createList(struct Dll *p){
    p->head = p->tail = NULL;
}

bool isEmpty(struct Dll *p){
    return p->head == NULL;
}

void insertAtTail(struct Dll *p, int value){
    struct Node *newNode = mallocNode(value);
    if(isEmpty(p))  p->head = p->tail = newNode;
    else{
        newNode->prev = p->tail;
        p->tail->next = newNode;
        p->tail = newNode;
    }
}


void printList(struct Dll *p){
    struct Node *aux = p->head;
    while(aux != NULL){
        printf(" %d", aux->value);
        aux = aux->next;     
    }
    printf("\n");
}