#include "main.h"
/**
 * _isdigit() - check for digits.
 * @c: take the char that will be scaned
 *
 * return: "1" for digits or "0" for anything else
 */
int _isdigit(int c)
{
        for (int j = 48; j <= 57; j++)
        {
                if (c == j)
                        return 1;
	}
	return 0;

        
}
