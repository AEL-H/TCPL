#include <stdio.h>
#define ARRAYSIZE 26
/* produces histogram of word lengths from input */
main()
{
	int i, j, c;
	int histogram[ARRAYSIZE];

	for (i = 0; i < ARRAYSIZE; ++i)
	{
		histogram[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			++histogram[c - 'a'];
	}
	for (i = 0; i < ARRAYSIZE; ++i)
	{
		printf("%c: ", i+'a');
		for (j = 0; j < histogram[i]; ++j)
			printf("|");
		printf("\n");
	}
}
