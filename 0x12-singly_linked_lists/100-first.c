#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * _constructor - executes before main()
 * Return: void
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
