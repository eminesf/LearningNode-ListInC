#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "Node.c"

int main()
{
    printf("cria a lista e adiciona no final :\n");
    Node* head = create();
    head->info = 1;
    head->proximo = NULL;

    addToFinal(head, 2);
    addToFinal(head, 3);
    addToFinal(head, 4);

    printList(head);

    printf("adiciona ao inicio:\n");
    addToInitial(head, 0);
    head = addToInitial(head, 10);

    printList(head);

    printf("remove final:\n");
    removeFinal(head);
    removeFinal(head);
    printList(head);

    printf("remove inicio:\n");
    head = removeInitial(head);
    printList(head);

    printf("lista antes de remover valor escolhido:\n");
    addToFinal(head, 2);
    addToFinal(head, 3);
    addToFinal(head, 4);

    printList(head);

    printf("removido:\n");
    removeChosenNode(head, 2);

    printList(head);

    printf("adicionando de forma ordenada:\n");

    head = addByOrderNode(head, 0);
    head = addByOrderNode(head, -1);
    head = addByOrderNode(head, -10);
    head = addByOrderNode(head, -2);
    head = addByOrderNode(head, -7);
    head = addByOrderNode(head, 10);
    head = addByOrderNode(head, 7);



    printList(head);




    return 0;
}
