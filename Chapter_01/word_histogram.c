#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */
#define ARRAYSIZE 20
/* produces histogram of word lengths from input */
main()
{
	int i, j, c, wordlength, state;
	int histogram[ARRAYSIZE];

	state = OUT;
	wordlength = 0;
	for (i = 0; i < ARRAYSIZE; ++i)
	{
		histogram[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == '\t' || c==' ')
		{
			state = OUT;
			histogram[wordlength] = histogram[wordlength] + 1;
			wordlength = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			++wordlength;
		}
		else
		{
			++wordlength;
		}
	}
	for (i = 0; i < ARRAYSIZE; ++i)
	{
		printf("%d: ", i);
		for (j = 0; j < histogram[i]; ++j)
			printf("|");
		printf("\n");
	}
}
