#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
    while((a != -1) && (b != -1) && (c != -1))
		 {
              printf("判斷是否為直角三角形\n");
	          printf("請輸入三個邊長");
	          scanf_s("%d %d %d", &a, &b, &c);
              if ((a >= 500) || (b >= 500) || (c >= 500))
		      {
			      printf("邊長不能超過500\n");
		      }
	          else if ((a*a == b * b + c * c) || (b*b == a * a + c * c) || (c*c == b * b + a * a))
	          {
		         printf("此三角形為直角三角形\n");
		 
	          }
		      else 
		      {
			     printf("這三個邊長無法成為直角三角形\n");
		      }
		 }
         

	system("pause");
	return 0;
}