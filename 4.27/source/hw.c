#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
    while((a != -1) && (b != -1) && (c != -1))
		 {
              printf("�P�_�O�_�������T����\n");
	          printf("�п�J�T�����");
	          scanf_s("%d %d %d", &a, &b, &c);
              if ((a >= 500) || (b >= 500) || (c >= 500))
		      {
			      printf("�������W�L500\n");
		      }
	          else if ((a*a == b * b + c * c) || (b*b == a * a + c * c) || (c*c == b * b + a * a))
	          {
		         printf("���T���ά������T����\n");
		 
	          }
		      else 
		      {
			     printf("�o�T������L�k���������T����\n");
		      }
		 }
         

	system("pause");
	return 0;
}