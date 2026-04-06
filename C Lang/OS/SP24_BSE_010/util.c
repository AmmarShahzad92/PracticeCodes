#
#include "simple.h"


// Populating instructions in memory using sml.txt
int instruction_loading_in_memory(char* file, int memory[])
{
	
    FILE* fp = fopen(file, "r");
    if (!fp)
    {
        return FALSE;
    }

    int counter = 0;
    int value = 0;
	// Loop for populting
    while (counter < MEMORY_SIZE && fscanf(fp, "%d", &value) == 1)
    {
        memory[counter++] = value;
    }

    fclose(fp);
    return TRUE;
}

// Printing currentstate of regesters and memoy
void printing_registersState_memory(const int memory[], const Registers reg)
{
    printf("\n\n-------------- MEMORY --------------\n");

    for (int counter = 0; counter < MEMORY_SIZE; counter++)
    {
        printf("%4d ", memory[counter]);

        if ((counter + 1) % 10 == 0)
            printf("\n");
    }

	printf("\n-------------- REGISTERS --------------\n");
    printf("Accumulator         : %d\n", reg.acc);
    printf("Instruction Counter : %d\n", reg.ic);
    printf("Instruction         : %d\n", reg.ir);
    printf("Opcode              : %d\n", reg.opcode);
    printf("Operand             : %d\n", reg.operand);
}
