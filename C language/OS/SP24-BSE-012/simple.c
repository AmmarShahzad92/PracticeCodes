#include <stdio.h>
#include "simple.h"

int main(int argc, char *argv[])
{
    /* Check if input file is provided */
    if (argc < 2)
    {
        printf("ERROR: Please provide an input file (e.g., ./simple.exe program.txt)\n");
        return -1;
    }

    char *inputFile = argv[1];

    /* Main memory initialization */
    int memory[MEMORY_SIZE] = {0};

    /* Load instructions into memory */
    if (!instruction_loading_in_memory(inputFile, memory))
    {
        printf("ERROR: Unable to open or read file.\n");
        return -2;
    }

    /* Initialize registers */
    Registers reg = {0};
    int halted = FALSE;

    /* Instruction execution loop */
    while (!halted)
    {
        reg.ir = memory[reg.ic++];
        reg.opcode  = reg.ir / 100;
        reg.operand = reg.ir % 100;

        /* Validate memory access */
        if (reg.operand < 0 || reg.operand >= MEMORY_SIZE)
        {
            printf("ERROR: Memory address out of range\n");
            break;
        }

        printing_registersState_memory(memory, reg);

        switch (reg.opcode)
        {
            case READ:
                printf("Input value          : ");
                scanf("%d", &memory[reg.operand]);
                break;

            case WRITE:
                printf("Output value         : %d\n", memory[reg.operand]);
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
                    printf("ERROR: Division by zero detected\n");
                    halted = TRUE;
                }
                else
                {
                    reg.acc /= memory[reg.operand];
                }
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
                printf("\nPROGRAM HALTED SUCCESSFULLY\n");
                halted = TRUE;
                break;

            default:
                printf("ERROR: Invalid opcode encountered\n");
                halted = TRUE;
        }
    }

    return 0;
}
