#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node{
    int info;
    struct node* proximo;
} Node;

Node* head();

void addToFinal(Node* head, int value);

void addToInitial(Node* head, int value);

void printList(Node* head);


#endif // NODE_H_INCLUDED
