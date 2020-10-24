#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "Node.c"

int main()
{
    Node* head = create();
    head->info = 1;
    head->proximo = NULL;

    addToFinal(head, 2);
    addToFinal(head, 3);
    addToFinal(head, 4);

    printf("cria a lista:\n");
    printList(head);

    printf("adiciona ao inicio:\n");

    addToInitial(head, 0);
    head = addToInitial(head, 10);

    printList(head);

    printf("remove final:\n");

    removeFinal(head);
    printList(head);

    printf("remove inicio:\n");

    head = removeInitial(head);
    printList(head);


    return 0;
}
