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
	int a = factorial(7);
	printf("%d", a);
	printf("임시로 잘 되나 확인");
}
