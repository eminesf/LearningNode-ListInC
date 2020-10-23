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

    printList(head);

    addToInitial(head, 0);
    addToInitial(head, 10);

    printList(head);




    return 0;
}
