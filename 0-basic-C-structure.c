#include <stdio.h>

/**
* main - prints farhrenheit-celcius table,
* in intervals of 20.
* Return: 0
*/
int main(void)
{
	int fahr, celcius;

	int lower, upper, step;

	lower = 0;   /* lower limit of temparature scale.*/
	upper = 300; /* upper limit. */
	step = 20;   /* step size. */

	fahr = lower;
	printf("Farhrenheit\tCelcius\n");
	while (fahr <= upper)
	{
		celcius = 5 * (fahr - 32) / 9;       /* Formular for conversion. */
		printf("%d\t\t%d\n", fahr, celcius); /* Print the values. */
		fahr = fahr + step;                  /* Increment counter. */
	}
	return (0);
}
