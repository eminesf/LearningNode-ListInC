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

    Node* addToInitial(Node* head, int value){
        Node* newNode = create();
        newNode->info = value;
        newNode->proximo = head;

        head = newNode;

        return head;
    }

    void removeFinal(Node* head){

        if(head->proximo == NULL){
            free(head);
            return;
        }

        Node* current = head;

        while(current->proximo->proximo != NULL){
            current = current->proximo;
        }

        free(current->proximo);
        current->proximo = NULL;
        return;
    }

    Node* removeInitial(Node* head){
        if(head->proximo == NULL){
            free(head);
            return;
        }

        Node* auxiliar = create();
        auxiliar = head->proximo;
        free(head);
        return auxiliar;
    }

    void printList(Node* head){
        Node* current = head;

        while(current != NULL){
            printf("%d\n", current->info);
            current = current->proximo;
        }
    }
