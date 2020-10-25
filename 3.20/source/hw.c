#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a = 0;
	double b,c;
	do
    {  
	     printf("Enter # of hours worked (-1 to end): ");
	     scanf_s("%lf", &a);
	     printf("Enter hourly rate of the worker ($00.00): ");
	     scanf_s("%lf", &b);
	     if (a <= 40)
	     {
		    c = a * b;
	     }
	     else
	     {
		    c = (a*b) + (b/2);
	     }
	     printf("Salary is $%lf\n", c);
	} 
	while (a != -1);
	system("pause");
	return 0;
}