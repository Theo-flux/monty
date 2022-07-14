#include "monty.h"

/**
 * main - interpreter of the Monty Language
 * @argc: argument count
 * @argv: argument array
 * Return: 1 is successfull and 0  if failed
 */
int main(int argc, char *argv[])
{
	if (argc > 2 || argc < 2)
	{
		printf("USAGE: monty file\n");
		EXIT_FAILURE;
	}
	else
	{
		int i;
		int lineNo = 0;
		char text[100];
		FILE *fp = NULL;

		i = argc - 1;
		/*printf("File to be opened:%s\n", argv[i]);*/

		fp = fopen(argv[i], "r");
		if (fp == NULL)
		{
			printf("Error: Can't open file %s\n", argv[i]);
			EXIT_FAILURE;
		}
		else
		{
			while (fgets(text, sizeof(text), fp) != NULL)
			{
				/*fgets(text, sizeof(text), fp);*/
				printf("%s\n", text);
				lineNo += countline(text, &lineNo);
				printf("Line no: %d\n", lineNo);
			}
			printf("%d\n", lineNo);
		}

		fclose(fp);
	}

	/*while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}*/

	return (1);
}
