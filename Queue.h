#ifndef _QUEUE_H_
#define _QUEUE_H_

/*******************************************************************
 * File        : Queue.h
 * Description : Contains function prototypes and struct definition
 *               for creating and utilizing a Queue appropriately.
 * Author      : Chris Ranc
 ********************************************************************/

#include "LinkedLists.h"

/******************************************************************************
 * Struct for Queue utilizing a generic Linked List structure to queue any
 * desired reference to a struct or data type.
 ******************************************************************************/
typedef struct Queue{
    LinkedList linked_list;
    int * size;
    ListNode ** q_head;
} Queue;

/******************************************************************************
 * Initialize the Queue data structure.
 ******************************************************************************/
void initQueue(Queue * que);

/******************************************************************************
 * Add an element to the queue structure.
 ******************************************************************************/
void enQueue(Queue * que, void * DataPtr);

/******************************************************************************
 * Pop the first element in the queue.  If the Queue is empty a NULL will be
 * returned.  
 ******************************************************************************/
void * deQueue(Queue * que);

/******************************************************************************
 * Get the first element in the queue without removing it.  Will return Null
 * if the Queue is empty.
 ******************************************************************************/
void * peek(Queue * que);

/******************************************************************************
 * De-allocate the Queue and reset struct fields to indicate that the queue 
 * is empty.
 ******************************************************************************/
void destroyQueue(Queue * Que);

#endif 
