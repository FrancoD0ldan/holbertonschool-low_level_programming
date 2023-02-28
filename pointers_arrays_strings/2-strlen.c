#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)

{
	char a[20] = "My first strlen!";
	char b[20] = {'M', 'y', 'f', 'i', 'r', 's', 't', 's', 't', 'r', 'l', 'e', 'n', '\0'};

	printf("length of a string a = %zu \n", strlen(a));
	printf("length of a string b = %zu \n", strlen(b));

	return (0);
}
