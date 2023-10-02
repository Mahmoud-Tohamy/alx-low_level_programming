#include <stdio.h>
/**
 * main-prints number of arguments passed
 *
 * @argc: number of commandline arguments
 *
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
