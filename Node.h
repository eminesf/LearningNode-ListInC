#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node{
    int info;
    struct node* proximo;
} Node;

Node* head();

void addToFinal(Node* head, int value);

Node* addToInitial(Node* head, int value);

void removeFinal(Node* head);

Node* removeInitial(Node* head);

void printList(Node* head);

void removeChosenNode(Node* node, int value);

#endif // NODE_H_INCLUDED
