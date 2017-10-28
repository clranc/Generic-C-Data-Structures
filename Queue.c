#include "Queue.h"
#include "stdlib.h"

void initQueue(Queue * que){
    InitLinkedList(&(que->linked_list));
    que->size = &que->linked_list.NumElements;
    que->q_head = &que->linked_list.FrontPtr;
}

void enQueue(Queue * que, void * DataPtr){
    AddToBackOfLinkedList(&que->linked_list, DataPtr);
}

void * deQueue(Queue * que){
    return RemoveFromFrontOfLinkedList(&que->linked_list);
}

void * peek(Queue * que){
    return &que->q_head;
}

void destroyQueue(Queue * que){
    DestroyLinkedList(&que->linked_list);
}
