#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	double c,d;
	a = 0;
	while (a != -1)
	{
          printf("Enter loan principal (-1 to end);");
	      scanf_s("%d", &a);
	      printf("Enter interest rate:");
	      scanf_s("%lf", &c);
	      printf("Enter term of the loan in days:");
	      scanf_s("%d", &b);
	      d = (a*c*b) / 365;
	      printf("The interest charge is %lf\n", d);

	}
	

	system("pause");
	return 0;
}