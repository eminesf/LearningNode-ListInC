#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

    Node* create(){
        Node* head = NULL;
        head = (Node*) malloc(sizeof(Node));
        if(head == NULL){
            return 1;
        }
        return head;
    }

    void addToFinal(Node* head, int value){
        Node* current = head;

        while(current->proximo != NULL){
            current = current->proximo;
        }
        Node* newNode = create();
        current->proximo = newNode;
        newNode->info = value;
        newNode->proximo = NULL;
    }

    void addToInitial(Node* head, int value){
        Node* newNode = create();
        newNode->info = value;
        newNode->proximo = head;

        head = newNode;
    }

    void printList(Node* head){
        Node* current = head;

        while(current != NULL){
            printf("%d\n", current->info);
            current = current->proximo;
        }
    }
