#ifndef _HEAP_H_
#define _HEAP_H_

#include "generics.h"

typedef struct heap_node_struct{
    void * value;
    void * key;
}h_node_t;

#define H_L_CHILD(x) x * 2 + 1
#define H_R_CHILD(x) x * 2 + 2
#define H_PARENT(x) (x - 1) / 2


typedef struct heap_struct
{
    long int size, node_cnt, level_cnt;
    node * elems;
    int (*cmp)(*h_node_t, *h_node_t);
    
} heap_t;

heap_t * newHeap(int (*cmp)(*h_node_t, *h_node_t));

void heapInsert(heap_t * heap, h_node_t * val);


