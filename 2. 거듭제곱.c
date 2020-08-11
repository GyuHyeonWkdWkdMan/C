#include<stdio.h>

int Power(int x, int n)
{
	if (n == 0) 
	{
		return 1;
	}
	else 
	{
		return x * Power(x, n - 1);
	}
}

int main()
{
	int a = Power(2, 4);
	printf("%d",a);
}
