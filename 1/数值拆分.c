#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��123��ֳɸ�λ��ʮλ����λ    ��ʽ����λ����ֵ%10     ʮλ����ֵ/10%10    ��λ����ֵ/100%10  ǧλ��������������
int main78() {
	int a;
	printf("������һ������:");
	scanf("%d", &a);
	
	int ge = a % 10;
	
	int shi = a / 10 % 10;

	int bai = a / 100 % 10;

	printf("��λ�ǣ�%d\n", ge);
	printf("ʮλ�ǣ�%d\n", shi);
	printf("��λ�ǣ�%d\n", bai);
	
	


	return 0;







}