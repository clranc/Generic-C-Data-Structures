/*******************************************************************
 * LinkedList
 *    This program reads in a file and loads its contents into a
 *    linked list.  After which it prints the first 6 and last 6
 *    entre
 ********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Customer.h"
#include "Queue.h"
#include "LinkedLists.h"

void printList(LinkedList * ll){
    ListNode * trav_node;
    Customer * tmp;
    int x;
    trav_node = ll->FrontPtr;
    for(x = 0; x < ll->NumElements; x++){
        tmp = (Customer *)trav_node->node_val;
        printf("Index:%i Node:%lu\n", x, tmp->time_waiting);
        trav_node = trav_node->Next;
    }

}

int main(int argc, char*argv[]){

    /* declare local variables */
    int ErrorCode = 0;               
    Queue que;      /* LinkedList for Data */
    Customer * tmp;
    char a;


    initQueue(&que);

    while (1){
        printf("add (a), print (p),  pop head (h), quit(q): ");
        scanf(" %c", &a);
        if (a == 'a' ){
            enQueue(&que, (void *)genCustomer());
        }
        else if (a == 'p' && *que.size > 0){
            printList(&que.linked_list);
        }

        else if (a == 'h' && *que.size > 0){
            tmp = (Customer *)deQueue(&que);
            printf("popped : %lu\n", tmp->time_waiting);
            printList(&que.linked_list);
            free(tmp);
        }
        else if (a == 'q'){
            break;
            printf("\n");
        }
        printf("\n");

    }

    destroyQueue(&que);

    return ErrorCode;
} /* main() */


