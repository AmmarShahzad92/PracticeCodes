#ifndef SIMPLE_H
#define SIMPLE_H

/* Memory configuration */
#define MEMORY_SIZE 100

/* Instruction opcodes */
#define READ        10
#define WRITE       11
#define LOAD        20
#define STORE       21
#define ADD         30
#define SUBTRACT    31
#define DIVIDE      32
#define MULTIPLY    33
#define BRANCH      40
#define BRANCHNEG   41
#define BRANCHZERO  42
#define HALT        43

/* Boolean definitions */
#define TRUE  1
#define FALSE 0

/* CPU Registers structure */
typedef struct
{
    int acc;     /* Accumulator */
    int ic;      /* Instruction Counter */
    int ir;      /* Instruction Register */
    int opcode;
    int operand;
} Registers;

/* Function declarations */
int  instruction_loading_in_memory(char *file, int memory[]);
void printing_registersState_memory(const int memory[], const Registers reg);

#endif
