#ifndef _LINKED_LISTS_H_
#define _LINKED_LISTS_H_
/*************************************************************************
 * File        : Queue.h
 * Description : Contains function prototypes and struct definition
 *               for creating and utilizing a Linked List appropriately.
 * Author      : Chris Ranc
 *************************************************************************/

/******************************************************************************
 * Struct for linked list nodes, utilizes a void pointer to contain any 
 * reference to any datatype or struct as well as linker pointers to the 
 * next and previous nodes in the list. 
 ******************************************************************************/
typedef struct ListNode
  {
    /* The user information field */
    void * node_val;
    /* Link pointers */
    struct ListNode *Next;
    struct ListNode *Previous;
  } ListNode;

/**********************************************************************************
 * Struct for linked list "header", keeps a counter of the size of the linked list
 ***********************************************************************************/
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
void initLinkedList(LinkedList *ListPtr);

/******************************************************************************
 * Adds a node to the front of the list.
 ******************************************************************************/
void addToFrontOfLinkedList(LinkedList *ListPtr, void * DataPtr);

/******************************************************************************
 * Adds a node to the back of the list.
 ******************************************************************************/
void addToBackOfLinkedList(LinkedList *ListPtr, void * DataPtr);

/*****************************************************************************
 * Removes a node from the front of the list and returns a pointer to the node
 * removed. On empty lists should return a NULL pointer.
 ******************************************************************************/
void * removeFromFrontOfLinkedList(LinkedList *ListPtr);

/******************************************************************************
 * Removes a node from the back of the list and returns a pointer to the node
 * removed. On empty lists should return a NULL pointer.
 ******************************************************************************/
void * removeFromBackOfLinkedList(LinkedList *ListPtr);

/******************************************************************************
 * De-allocates the linked list and resets the struct fields (in the header) 
 * to indicate that the list is empty.
 ******************************************************************************/
void destroyLinkedList(LinkedList *ListPtr);

#endif /* _QUEUE_H_ */
