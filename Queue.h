#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "LinkedLists.h"
#include "Customer.h"

typedef struct Queue{
    LinkedList linked_list;
    int * size;
    ListNode ** q_head;
} Queue;

void initQueue(Queue * que);
void enQueue(Queue * que, void * DataPtr);
void * deQueue(Queue * que);
void destroyQueue(Queue * Que);

#endif 
