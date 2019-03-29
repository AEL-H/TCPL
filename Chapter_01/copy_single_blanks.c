
#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
	int c, p; // current char, prev char
	p = -1;   // set to non char value
	while ((c = getchar()) != EOF) {
		if ((c == ' ') & (p == ' '))
			;
		else
			putchar(c);
		p = c;
	}
}
