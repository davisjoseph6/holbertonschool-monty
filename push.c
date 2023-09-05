#include "monty.h"

/**
 * push - function that push an item to the top of the stack
 * @num: the number to push
 */

void push(char *num)
{
	if (num == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer", gvar.lineNum);
		cleanup();
		exit(EXIT_FAILURE);
	}

	checkNum(num);
	pushInt(atoi(num));
}

