#include "main.h"

/** if the integer value of c is within the ASCII range of lowercase letters (97-122) **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

