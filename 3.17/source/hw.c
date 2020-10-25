#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0;
	double  b, c, d, e,f;
	while(a!=-1)
	{   printf("Enter account number (-1 to end):");
	    scanf_s("%d", &a);
	    printf("Enter begining balance:");
	    scanf_s("%lf", &b);
	    printf("Enter total charges:");
	    scanf_s("%lf", &c);
	    printf("Enter total credits:");
	    scanf_s("%lf", &d);
	    printf("Enter credit limit:");
	    scanf_s("%lf", &e);
	    f = (b + c) - d;
	    if (f > e)
	    {
		   printf("Account:%d\n", a);
		   printf("Credit limit:%lf\n", e);
		   printf("Balance:%lf\n", f);
		   printf("Credit Limit Exceeded.\n");
	    }
	}
	
	system("pause");
	return 0;
}