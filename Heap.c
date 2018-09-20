#include <stdlib.h>
#include "Heap.h"

heap_t * newHeap(int (*doSwap)(void *, void *)){
    heap_t * new_heap = malloc(sizeof(heap_t));
    new_heap->size = 0;
    new_heap->node_cnt = 0;
    new_heap->level_cnt = 0;
    new_heap->doSwap = doSwap;

    return new_heap;
}

static inline void increaseHeap(heap_t * heap){
    heap->level_cnt++;
    heap->size += 1 << heap->level_cnt;
    heap->elem = realloc(heap->elem, heap->size * sizeof(void *));
}

static inline void decreaseHeap(heap_t * heap){
    if(heap->level_cnt > 0){
        heap->level_cnt--;

        if(heap->level_cnt == 0)
            free(heap->elem);
            return;

        heap->size -= 1 << heap->level_cnt;
        heap->elem = realloc(heap->elem, heap->size * sizeof(void *));
    }
}

static inline void nodeSwap(

static inline void heapReorder(heap_t * heap){
    

}

void heapInsert(heap_t * heap, void * val){

    if (heap->node_cnt == heap->size)
        increaseHeap(heap);

    heap->elem[heap->node_cnt] = val;



}
