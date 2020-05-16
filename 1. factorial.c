#include<stdio.h>


int factorial(int su)
{
	if (su <= 1) {
		return 1;
	}
	else
	{
		return su* factorial(su - 1);
	}
}

int main()
{
	int a = factorial(5);
	printf("%d", a);
}