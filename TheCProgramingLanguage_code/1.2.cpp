#include <stdio.h>

//when add '\c' to the printf, which means not suppported escape sequence,
//the gcc compiler would report a warning and treat it as normal charactor.
int main()
{
	printf("hello, wor\cld\n");
	return 0;
}
