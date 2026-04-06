#include <stdio.h>
#include "simple.h"

/* Load SML instructions into memory */
int instruction_loading_in_memory(char *file, int memory[])
{
    FILE *fp = fopen(file, "r");
    if (fp == NULL)
        return FALSE;

    int index = 0;
    int instruction;

    while (index < MEMORY_SIZE && fscanf(fp, "%d", &instruction) == 1)
    {
        memory[index++] = instruction;
    }

    fclose(fp);
    return TRUE;
}

/* Display memory and register state */
void printing_registersState_memory(const int memory[], const Registers reg)
{
    printf("\n----------- MEMORY -----------\n");

    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        printf("%4d ", memory[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    printf("\n----------- REGISTERS -----------\n");
    printf("Accumulator         : %d\n", reg.acc);
    printf("Instruction Counter : %d\n", reg.ic);
    printf("Instruction         : %d\n", reg.ir);
    printf("Opcode              : %d\n", reg.opcode);
    printf("Operand             : %d\n", reg.operand);
}
