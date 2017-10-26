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
#include "LinkedLists.h"

void printList(LinkedList * ll){
    ListNode * trav_node;
    Customer * tmp;
    int x;
    trav_node = ll->FrontPtr;
    for(x = 0; x < ll->NumElements; x++){
        tmp = (Customer *)trav_node->node_val;
        printf("Index:%d Node:%d\n", x, tmp->time_waiting);
        trav_node = trav_node->Next;
    }

}

int main(int argc, char*argv[]){

    /* declare local variables */
    int ErrorCode = 0;               /* Application error code - 0 is OK */
    LinkedList TestLinkedList;      /* LinkedList for Data */
    int input;
    Customer * tmp;
    char a;
    /* One command line argument is required: the file name     */
    /*TestLinkedList = NULL;*/
    /*TestNode = NULL;*/

    InitLinkedList(&TestLinkedList);

    while (1){
        printf("add (a), print (p),  pop head (h), quit(q): ");
        scanf("%c", &a);
        if (a == 'a' ){
            AddToBackOfLinkedList(&TestLinkedList, (void *)genCustomer());
        }
        else if (a == 'p' && TestLinkedList.NumElements > 0){
            printList(&TestLinkedList);
        }

        else if (a == 'h' && TestLinkedList.NumElements > 0){
        //    tmp = RemoveFromFrontOfLinkedList(&TestLinkedList);
            tmp = (Customer *)RemoveFromFrontOfLinkedList(&TestLinkedList);
            printf("popped : %d\n", tmp->time_waiting);
            printList(&TestLinkedList);
            free(tmp);
        //    printf("Head : %d\nList :", tmp);
        //    printList(&TestLinkedList);
        }
        else if (a == 'q'){
            break;
        }
        printf("\n");

    }

    DestroyLinkedList(&TestLinkedList);

    return ErrorCode;
} /* main() */


