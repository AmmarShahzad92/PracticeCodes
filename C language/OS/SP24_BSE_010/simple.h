
// Header Gaurd (in modern c we use #pragma once for same purpuse)
#ifndef SIMPLE_H
#define SIMPLE_H
/* if simple.h is defined oncethen do not define it otherwise define it*/

// Defining memory size
#define MEMORY_SIZE 100

// Defining Opcodes
#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

// Defining boolean values for ease of use
#define TRUE 1
#define FALSE 0

// Registers structure
typedef struct
{
    int acc;
    int ic;
    int ir;
    int opcode;
    int operand;
} Registers;


// Function prototypes that used in simple.c and defined in util.c
int instruction_loading_in_memory(char* file, int memory[]);
void printing_registersState_memory(const int memory[], const Registers reg);

#endif