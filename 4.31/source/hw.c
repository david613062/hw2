#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if  (i == 4 )
			{
                printf("%c",sign);
			}
			else if ((j == 4) && (i == 0))
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5)) && (i == 1))
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5) || (j == 2) || (j == 6) )&& (i == 2) ) 
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5) || (j == 2) || (j == 6) || (j == 7) || (j == 1)) && (i == 3))
			{
				printf("%c", sign);
			}
			else if ((j == 4) && (i == 8))
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5)) && (i == 7))
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5) || (j == 2) || (j == 6)) && (i == 6))
			{
				printf("%c", sign);
			}
			else if (((j == 4) || (j == 3) || (j == 5) || (j == 2) || (j == 6) || (j == 7) || (j == 1)) && (i == 5))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}