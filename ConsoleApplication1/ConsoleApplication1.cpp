#include <stdio.h>
int main()
{
	int  z, x, c, v;
   	printf("Enter chislo v mm:");
	scanf_s("%d", &x);
	z = x / 1000;
	printf("m:%d\n", z);
	c = x / 10;
	printf("cm:%d\n", c);
	printf("mm:%d", x);

	return 0;
}
