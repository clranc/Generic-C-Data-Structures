/*******************************************************************
 * LinkedList
 ********************************************************************/

#include <stdlib.h>
#include "LinkedLists.h"

void InitLinkedList(LinkedList *ListPtr){
    (*ListPtr).NumElements = 0;
    (*ListPtr).FrontPtr = NULL;
    (*ListPtr).BackPtr = NULL;
}

void AddToFrontOfLinkedList(LinkedList *ListPtr, void * DataPtr){
    ListNode *NewNode;
    NewNode = (ListNode *)malloc(sizeof(ListNode));
    /* Set pointers for the node and set it to the front pointer of the list */
    (*NewNode).Next = (*ListPtr).FrontPtr;
    (*NewNode).Previous = NULL;
    (*NewNode).node_val = DataPtr;
    (*ListPtr).FrontPtr = NewNode;

    /* If there are no elements in the list set the back pointer to be the n*/
    if((*ListPtr).NumElements == 0){
        (*ListPtr).BackPtr = NewNode;
    }
    else {
        (*((*NewNode).Next)).Previous = NewNode;
    }

   (*ListPtr).NumElements++; 
}

void AddToBackOfLinkedList(LinkedList *ListPtr, void * DataPtr){
    ListNode *NewNode;
    NewNode = (ListNode *)malloc(sizeof(ListNode));
    (*NewNode).Previous = (*ListPtr).BackPtr;
    (*NewNode).Next = NULL;
    (*NewNode).node_val = DataPtr;
    (*ListPtr).BackPtr = NewNode;

    if((*ListPtr).NumElements == 0){
        (*ListPtr).FrontPtr = NewNode;
    }
    else{
        (*((*NewNode).Previous)).Next = NewNode;
    }

    (*ListPtr).NumElements++;
}

void * RemoveFromFrontOfLinkedList(LinkedList *ListPtr){
    void * NewStruct;
    ListNode *NewNode;

    NewNode = (*ListPtr).FrontPtr;
    NewStruct = (*(*ListPtr).FrontPtr).node_val;

    if ((*ListPtr).FrontPtr != (*ListPtr).BackPtr){
        (*ListPtr).FrontPtr = (*(*ListPtr).FrontPtr).Next;
        (*(*ListPtr).FrontPtr).Previous = NULL;
    }
    else {
        (*ListPtr).FrontPtr = NULL;
        (*ListPtr).BackPtr = NULL;
    }

    free(NewNode);
    (*ListPtr).NumElements--;

    return NewStruct;
}

void * RemoveFromBackOfLinkedList(LinkedList *ListPtr){
    void * NewStruct = (*(*ListPtr).BackPtr).node_val;
    ListNode *NewNode = (*ListPtr).BackPtr;

    if ((*ListPtr).FrontPtr != (*ListPtr).BackPtr){
        (*ListPtr).BackPtr = (*(*ListPtr).BackPtr).Previous;
        (*(*ListPtr).BackPtr).Next = NULL;
    }
    else {
        (*ListPtr).FrontPtr = NULL;
        (*ListPtr).BackPtr = NULL;
    }

    free(NewNode);
    (*ListPtr).NumElements--;

    return NewStruct;
}

void DestroyLinkedList(LinkedList *ListPtr){
    int x;
    /* Declare a pointer to a node */
    ListNode *NodePtr;
    /* Declare a pointer to the list element (to be returned) */
    for(x = (*ListPtr).NumElements; x > 0; x--){
        /* Assign the pointer to the node being removed */
        NodePtr = (*ListPtr).FrontPtr;
        /* Advance the front to the next element */
        (*ListPtr).FrontPtr = (*NodePtr).Next;
        /* Detach the node being removed from the front of the list */

        (*ListPtr).NumElements--;
        /* De-allocate the node storage */
        free(NodePtr->node_val);
        free(NodePtr);

        if((*ListPtr).FrontPtr == NULL){
           break;
        }

        (*(*ListPtr).FrontPtr).Previous = NULL;

    }
}
