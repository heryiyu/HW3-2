#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 1;
	char a;
	while (i!=0)
	{
	printf("enter an alphabet:");
	scanf_s(" %c",&a);
	int x = (int)a;

	if (96<x)
	{
		x = (x - 32);
		printf(" %c", x);
	}

	else if (x<91)
	{
		x = (x + 32);
		printf(" %c", x);
	}

	printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}