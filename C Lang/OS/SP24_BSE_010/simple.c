#include <stdio.h>
#include "simple.h"


int main(int argc, char* argv[])
{
	// Checking whether userhas given txtfile while running the simple.exe or not
    if (argc < 2)
    {
        printf("No input file provided (after ./simple.exe type file name sml.txt).\n");
        return -1;
    }

	// Extracting given file in terminal using argv[]
    char* file = argv[1];

	// Memory
    int memory[MEMORY_SIZE] = {0};

	// Populating instructions in memory
    if (instruction_loading_in_memory(file, memory) == FALSE)
    {
		printf("\nCouldn't Open File.\n");
        return -2;
    }

	// Struct of registers
    Registers reg = {0, 0, 0, 0, 0};


    int halt = FALSE;

	// Main loop
    while (!halt)
    {
        reg.ir = memory[reg.ic++];
        reg.opcode = reg.ir / 100;
        reg.operand = reg.ir % 100;

		// Checking the valid operand
		if (reg.operand < 0 || reg.operand >= MEMORY_SIZE)
		{
			printf("ERROR: Invalid memory access\n");
			halt = TRUE;
			continue;   // stop this cycle safely
		}

        printing_registersState_memory(memory, reg);
		
		// Execution on the bases of Opcode
        switch (reg.opcode)
        {
            case READ:
                printf("Enter a number      : ");
                scanf("%d", &memory[reg.operand]);
                break;

            case WRITE:
                printf("Result              : %d\n", memory[reg.operand]);
                break;

            case LOAD:
                reg.acc = memory[reg.operand];
                break;

            case STORE:
                memory[reg.operand] = reg.acc;
                break;

            case ADD:
                reg.acc += memory[reg.operand];
                break;

            case SUBTRACT:
                reg.acc -= memory[reg.operand];
                break;

            case DIVIDE:
				if (memory[reg.operand] == 0)
				{
					printf("ERROR: Division by zero\n");
					halt = TRUE;
				}
				else
					reg.acc /= memory[reg.operand];
                break;

            case MULTIPLY:
                reg.acc *= memory[reg.operand];
                break;

            case BRANCH:
                reg.ic = reg.operand;
                break;

            case BRANCHNEG:
                if (reg.acc < 0)
                    reg.ic = reg.operand;
                break;

            case BRANCHZERO:
                if (reg.acc == 0)
                    reg.ic = reg.operand;
                break;

            case HALT:
                printf("\nEXECUTION TERMINATED\n");
                halt = TRUE;
                break;

            default:
                printf("\nINVALID OPCODE\n");
                halt = TRUE;
        }
    }

    return 0;
}
