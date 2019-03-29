#include <stdio.h>

#define MAX_SIZE 1000

int getline(char s[], int lim);

main()
{
	/* allocate memory for a string */
	char line[MAX_SIZE];
	int len;

	/* read file line by line */
	while ((len = getline(line, MAX_SIZE)) > 0)
	{
		/* if line longer than 80, print it */
		if (len > 80)
			printf("line: %s", line);
	}
}

int getline(char s[], int lim)
{
	int i;
	char c;
	for (i = 0; (i < lim-1) && (c = getchar()) != EOF && c != '\n'; ++i)
			s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
