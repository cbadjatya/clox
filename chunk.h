#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
    OP_RETURN
} OpCode;

// dynamic array to store a sequence of bytes (opcodes?)
typedef struct{
    uint8_t* code;
    int capacity;
    int size;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif

