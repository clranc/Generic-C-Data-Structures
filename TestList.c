/*******************************************************************
 * LinkedList
 *    This program reads in a file and loads its contents into a
 *    linked list.  After which it prints the first 6 and last 6
 *    entre
 ********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedLists.h"


int main(int argc, char*argv[]){

    /* declare local variables */
    int ErrorCode = 0;               /* Application error code - 0 is OK */
    LinkedList TestLinkedList;      /* LinkedList for Data */
    int input, tmp;
    char a;
    /* One command line argument is required: the file name     */
    /*TestLinkedList = NULL;*/
    /*TestNode = NULL;*/

    InitLinkedList(&TestLinkedList);

    while (1){
        printf("add (a), print (p), pop tail (t), pop head (h), quit(q): ");
        scanf("%c", &a);

        if (a == 'a'){
            printf("enter value:");
            scanf("%d", &input);
            AddToFrontOfLinkedList(&TestLinkedList, input);
        }
        else if (a == 'p'){
            printList(&TestLinkedList);
        }

        else if (a == 't'){
            tmp = RemoveFromBackOfLinkedList(&TestLinkedList);
            printf("Tail : %d\nList :", tmp);
            printList(&TestLinkedList);
        }
        else if (a == 'h'){
            tmp = RemoveFromFrontOfLinkedList(&TestLinkedList);
            printf("Head : %d\nList :", tmp);
            printList(&TestLinkedList);
        }
        else if (a == 'q'){
            break;
        }

    }

    DestroyLinkedList(&TestLinkedList);

    return ErrorCode;
} /* main() */


