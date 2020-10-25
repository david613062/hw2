#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("計算周薪\n");
	printf("請輸入代碼:");
	scanf_s("%d", &a);
	switch(a)
	{
	case 1:
         printf("經理(領取固定周薪)\n");
		 break;
	case 2:
         printf("小時工(領取固定的小時工資的前40小時和半小時(即小時工資的1.5倍-用於加班工時))\n");
		 break;
	case 3:
		 printf("傭金工(工資為250美元加其每週總銷售額的5.7％)\n");
		 break;
	case 4:
         printf("計件工（工資為固定值）他們生產的每個物品的收入----該公司的每個零工只處理一種類型的物品)\n");
		 break;
	}
	system("pause");
	return 0;
}