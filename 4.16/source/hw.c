#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
    
	printf("(A)");
	for (i = 0;i<11;i++)
	{
		for (j = 0; j < i; j++)
		{
            printf("*", sign);
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*", sign);
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ", sign2);
		}
		for (j = 10; j > i; j--)
		{
			printf("*", sign);
		}
		printf("\n");
	}
	printf("(D)");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ", sign2);
		}
		for (j = 10; j > i; j--)
		{
			printf("*", sign);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}