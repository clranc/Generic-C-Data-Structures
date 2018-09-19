#include <stdlib.h>
#include "Heap.h"

heap_t * newHeap(int (*cmp)(node_val, node_val)){
    heap_t * new_heap = malloc(sizeof(heap_t));
    new_heap->size = 0;
    new_heap->node_cnt = 0;
    new_heap->level_cnt = 0;
    new_heap->cmp = cmp;

    return new_heap;
}

static inline void increaseHeap(heap_t * heap){
    heap->level_cnt++;
    heap->size += 1 << heap->level_cnt;
    heap->elem = realloc(heap->elem, heap->size * sizeof(node_val));
}

static inline void decreaseHeap(heap_t * heap){
    if(heap->level_cnt > 0){
        heap->level_cnt--;

        if(heap->level_cnt == 0)
            free(heap->elem);
            return;

        heap->elem = realloc(heap->elem, (1 << heap->level_cnt) * sizeof(node_val) + sizeof(heap->elem));
    }
}

void heapInsert(heap_t * heap, node_val val){
    
}
