#include <stdio.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF)
		//printf("%d\n",c);
		putchar(c);
	printf("EOF is %d\n", EOF);
	return 0;
}
