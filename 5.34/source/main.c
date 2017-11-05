#include <stdio.h>
#include <stdlib.h>

int pow(int x, int y);
int main(void)
{
	int m, n,sum;
	printf("m的n次方(m,n)請輸入整數m,n:");
	scanf_s("%d %d", &m, &n);
	if (n >= 0)
	{
		sum = pow(m, n);
		printf("(m,n)= %d", sum);
	}
	else
	{
		sum = pow(m,-n);
		printf("(m,n)= 1/%d", sum);
	}
	system("pause");
	return 0;
}

int pow(int x, int y)
{
	if (y < 1)
		return 1;
	else
		return x*pow(x, y - 1);

}