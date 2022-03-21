#include <stdio.h>

int main()
{
	int fahr, f_max, f_step;
	float celsius;
	fahr    = 0;
	f_max   = 300;
	f_step  = 20;
	celsius = 0.0;
	printf("Fahrenheit: |Celsius:    \n");
	printf("============|============\n");
	while(fahr <= f_max) {
		celsius = (fahr - 32) * 5 / 9.0;
		//with the '-' negtive charactor, it will align to left
		printf("%-12d|%-12.1f\n", fahr,celsius);
		fahr = fahr + f_step;
	}

	return 0;
}
