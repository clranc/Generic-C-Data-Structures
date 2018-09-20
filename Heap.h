#ifndef _HEAP_H_
#define _HEAP_H_

#include "generics.h"


#define H_L_CHILD(x) x * 2 + 1
#define H_R_CHILD(x) x * 2 + 2
#define H_PARENT(x) (x - 1) / 2

typedef struct heap_struct
{
    long int size, node_cnt, level_cnt;
    void ** elem;
    int (*doSwap)(void *, void *);

} heap_t;

heap_t * newHeap(int (*cmp)(h_node_t, h_node_t));

void heapInsert(heap_t * heap, void * val);

#endif
