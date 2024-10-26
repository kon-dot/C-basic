#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//把123拆分成个位、十位、百位    公式：个位：数值%10     十位：数值/10%10    百位：数值/100%10  千位：………………
int main78() {
	int a;
	printf("请输入一个整数:");
	scanf("%d", &a);
	
	int ge = a % 10;
	
	int shi = a / 10 % 10;

	int bai = a / 100 % 10;

	printf("个位是：%d\n", ge);
	printf("十位是：%d\n", shi);
	printf("百位是：%d\n", bai);
	
	


	return 0;







}