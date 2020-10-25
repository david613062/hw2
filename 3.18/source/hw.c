#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a,b;
	printf("Enter sales in dollars (-1 to end) :");
	scanf_s("%lf", &a);
	while (a != -1)
	{
		b = (a*0.09) + 200;
		printf("Salary is : %lf\n",b);
		printf("Enter sales in dollars (-1 to end) :");
		scanf_s("%lf", &a);
	}

	system("pause");
	return 0;


}