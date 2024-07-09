#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"
#include "chunk.h"

#define GROW_CAPACITY(capacity) \
((capacity < 8) ? 8 : capacity*2)

#define GROW_ARRAY(type, pointer, oldCapacity, newCapacity) \
(type*)reallocate(pointer, sizeof(type) * oldCapacity, sizeof(type) * newCapacity)

#define FREE_ARRAY(type, ptr, capacity) \
reallocate(ptr, capacity * sizeof(type), 0)

void* reallocate(void* ptr, size_t oldSize, size_t newSize);

#endif