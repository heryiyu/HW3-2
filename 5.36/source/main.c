#include <stdio.h>
#include <stdlib.h>

void move(int n, int a, int b, int c)
{
	if (n == 1)
		printf("\t%d->%d\n", a, c);
	else
	{
		move(n - 1, a, c, b);
		printf("\t%d->%d\n", a, c);
		move(n - 1, b, a, c);
	}
}

void main(void)
{
	int n;
	printf("請輸入碟子數量：");
	scanf_s("%d", &n);
	move(n,1,2,3);

	system("pause");
}