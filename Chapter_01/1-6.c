
#include <stdio.h>

/* copy input to output; 1st version */
main()
{
	int c;

	while (c = getchar() != EOF) {
		printf("%d",c);
	}
	printf("%d",c);
	printf("\n");
}
