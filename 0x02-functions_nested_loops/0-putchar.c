#include <unistd.h>
#include "main.h"

/**
 * include "main.h"
 * -putchar -write the character c to stdout
 *  -ac: the charater to print 
 *  return: on successful
 *  on errono: -1 is retune , and 
 */


int main(void)
{
	char cy[8] = "_putchar";

		int i = 0;
	char c;
	while (i <= 8)
	{
		c = cy[i];
		_putchar(c);
		i++
	}
	_putchar('\n');
	return(0);
}

int _putchar (char c)
{ 
	return(write(1, &c, 1));
}
	

