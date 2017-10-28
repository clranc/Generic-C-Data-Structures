/*******************************************************************
 * File        : Queue.c
 * Description : Routines for initializing Queues and utilizing 
 *               them appropriately.
 * Author      : Chris Ranc
 ********************************************************************/

#include "Queue.h"
#include "stdlib.h"

void initQueue(Queue * que){
    initLinkedList(&(que->linked_list));
    que->size = &que->linked_list.NumElements;
    que->q_head = &que->linked_list.FrontPtr;
}

void enQueue(Queue * que, void * DataPtr){
    addToBackOfLinkedList(&que->linked_list, DataPtr);
}

void * deQueue(Queue * que){
    return removeFromFrontOfLinkedList(&que->linked_list);
}

void * peek(Queue * que){
    return &que->q_head;
}

void destroyQueue(Queue * que){
    destroyLinkedList(&que->linked_list);
}
