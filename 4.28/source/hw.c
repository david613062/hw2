#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("�p��P�~\n");
	printf("�п�J�N�X:");
	scanf_s("%d", &a);
	switch(a)
	{
	case 1:
         printf("�g�z(����T�w�P�~)\n");
		 break;
	case 2:
         printf("�p�ɤu(����T�w���p�ɤu�ꪺ�e40�p�ɩM�b�p��(�Y�p�ɤu�ꪺ1.5��-�Ω�[�Z�u��))\n");
		 break;
	case 3:
		 printf("�Ī��u(�u�ꬰ250�����[��C�g�`�P���B��5.7�H)\n");
		 break;
	case 4:
         printf("�p��u�]�u�ꬰ�T�w�ȡ^�L�̥Ͳ����C�Ӫ��~�����J----�Ӥ��q���C�ӹs�u�u�B�z�@�����������~)\n");
		 break;
	}
	system("pause");
	return 0;
}