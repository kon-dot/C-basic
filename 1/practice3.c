#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main45() {
	double length;
	double width;
	double height;
	
	printf("请输入三个小数");
	scanf("%lf %lf %lf", &length, &width, &height);
	double bulk = length * width * height;
	printf("体积是%.2lf", bulk);



	return 0;








}