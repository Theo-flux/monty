#include "monty.h"

/**
 * get_opcode - function to get the opcode
 * @s: pointer to the text line from file
 * Return: 1 or 0
 */

void (*get_opcode(char *s))(stack_t **stack, unsigned int line_no)
{
    int i, arrSize;
    instruction_t opcodeArr[] = {
        {"push", stk_push},
        {"pall", stk_pall},
        {NULL, NULL}};

    arrSize = sizeof(opcodeArr) / sizeof(opcodeArr[0]);

    while (i < arrSize)
    {
        if (strcmp(s, opcodeArr[i].opcode))
        {
            return ((*opcodeArr).f);
        }

        i++;
    }
}
