
#include <stdio.h>

/* print Fahrenheit-Celsius table */

double FtoC(double temp);
main()
{
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, FtoC(fahr));
}
double FtoC(double temp)
{
	return (5.0/9.0) * (temp-32);
}
