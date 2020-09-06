#include<stdio.h>
int main()
{
	int n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	printf("Factor of number %d : ", n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
}