#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**Size for 32 bit**/
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of short: %d byte(s)\n", sizeof(short));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long));
	printf("Size of long long: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	printf("Size of double: %d byte(s)\n", sizeof(double));
	printf("Size of long double: %d byte(s)\n", sizeof(long double));

	/**Size for 64 bit **/
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of short: %ld byte(s)\n", sizeof(short));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	printf("Size of double: %ld byte(s)\n", sizeof(double));
	return (0);
}
