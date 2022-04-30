#include <stdio.h>

int main()
{
	printf("Fahrenheit: |Celsius:    \n");
	printf("============|============\n");
	for (int fahr = 0; fahr <= 300; fahr += 30)
		printf("%-12d|%-12.1f\n", fahr, (fahr - 32) * 5 / 9.0);

	return 0;
}
