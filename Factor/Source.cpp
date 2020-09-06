#include<stdio.h>
int main()
{
	long int n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	if (n >= 0 && n <= 999999999)
	{
		printf("Factor of number %ld : ", n);
		for (long int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				printf("%ld ", i);
			}
		}
	}
	else
	{
		printf("error");
	}
	return(0);
}