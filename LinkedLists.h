#ifndef _LINKED_LISTS_H_
#define _LINKED_LISTS_H_
/******************************************************************************
* Linked Lists Module public interface - LinkedList.h
* Revised: 5/02/2017
******************************************************************************/

/******************************************************************************
* Modify structure ListElem to suit your application
******************************************************************************/
#include <stdio.h>

/**************  Nothing else in the module needs to be modified *************/

/******************************************************************************
* struct for linked list nodes, contains user information and link pointers.
* The "ListElem" typemark must be defined based on specific needs of the
* application.
******************************************************************************/
typedef struct ListNode
  {
    /* The user information field */
    int state;
    /* Link pointers */
    struct ListNode *Next;
    struct ListNode *Previous;
  } ListNode;

/*********************************************************************************
* struct for linked list "header", keeps a counter of the size of the linked list
**********************************************************************************/
typedef struct LinkedList
  {
   /* Number of elements in the list */
   int NumElements;
   /* Pointer to the front of the list of elements, possibly NULL */
   struct ListNode *FrontPtr;
   /* Pointer to the end of the list of elements, possibly NULL */
   struct ListNode *BackPtr;
  } LinkedList;

/******************************************************************************
* Initialize the linked list data structure
******************************************************************************/
void InitLinkedList(LinkedList *ListPtr);

/******************************************************************************
* Adds a node to the front of the list.
******************************************************************************/
void AddToFrontOfLinkedList(LinkedList *ListPtr, int DataPtr);

/******************************************************************************
* Adds a node to the back of the list.
******************************************************************************/
void AddToBackOfLinkedList(LinkedList *ListPtr, int DataPtr);

/*****************************************************************************
* Removes a node from the front of the list and returns a pointer to the node
* removed. On empty lists should return a NULL pointer.
******************************************************************************/
int RemoveFromFrontOfLinkedList(LinkedList *ListPtr);

/******************************************************************************
* Removes a node from the back of the list and returns a pointer to the node
* removed. On empty lists should return a NULL pointer.
******************************************************************************/
int RemoveFromBackOfLinkedList(LinkedList *ListPtr);

/******************************************************************************
* De-allocates the linked list and resets the struct fields (in the header) 
* to indicate that the list is empty.
******************************************************************************/
void DestroyLinkedList(LinkedList *ListPtr);


/******************************************************************************
 * Prints out the given linked list
 *****************************************************************************/
void printList (LinkedList *ListPtr);

#endif /* _LINKED_LISTS_H_ */
