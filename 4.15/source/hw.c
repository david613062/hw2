#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int c;
	double a,b;
    printf("本金=5000\n");
    printf("期數=15年\n");
	printf("請輸入報酬率");
	scanf_s("%lf", &b);
	c = 1 + b;
    a = 5000*(c ^ 15);
	printf("本利和:%lf\n", a);
   
	system("pause");
	return 0;
}