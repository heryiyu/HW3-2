#include <stdio.h>
#include <stdlib.h>

unsigned long int fibonacci(unsigned int x);
int main(void)
{
	unsigned int z=1,n,v=1,s=0;
	printf("�O��ƦC\n");
	
	while (v>=s)
	{
		z++;
		v = fibonacci(z);
		s = fibonacci(z-1);
	}
	printf("���q���i�L���̤j���O��ƦC,��%u��=%u\n\n", z-1, fibonacci(z-1));

	printf("�п�J��n��:");
	scanf_s("%u", &n);
	if (n < 49)
		printf("�O��ƦC��%u��=%u\n\n", n, fibonacci(n));
	else
	{
		for (int i = 0; i < 500000000; i++);
		printf("\t\a�y!");
		for (int i = 0; i < 500000000; i++);
		printf("\t������!\n\n");
	}
	system("pause");
	return 0;
}

unsigned long int fibonacci(unsigned int x)
{
	unsigned long int a = 0, b = 1, c = 0;
	int i;
	if (x == 1)
		return a;
	else if (x == 2)
		return b;
	else
	{
		for (i = 0; i < x - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
	
}