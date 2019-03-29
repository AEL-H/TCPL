#include <stdio.h>

#define IN  1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */
main()
{
	int c, nl, nw, nc, state;

	state = IN;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			putchar('\n');
			putchar(c);
		}
		else
			putchar(c);
	}
	putchar('\n');
}
