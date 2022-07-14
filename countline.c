#include "monty.h"

/**
 * countline - returns line number
 * @text: text from each line in a file
 * @count: counter for each line
 * Return 1 if successfull
 */
int countline (char *text, int *count)
{
    unsigned int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == '\n')
        {
            count++;
        }
    }

    return *count;
}