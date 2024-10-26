//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int sum(int num1, int num2);
//int subtract(int num1, int num2);
//int mutiply(int num1, int num2);
//int divide(int num1, int num2);
//
//int main() {
//	int num1;
//	int num2;
//
//	scanf("%d%d", &num1, &num2);
//	int choice;
//	scanf("%d", &choice);
//	//定义一个函数指针数组
//	int(*arr[4])(int, int) = { sum,subtract,mutiply,divide };
//	int res=(arr[choice - 1])(num1, num2);
//	printf("outcome:%d", res);
//
//
//}
//
//int sum(int num1,int num2)
//{
//
//	return num1 + num2;
//}
//
//int subtract(int num1, int num2)
//{
//
//	return num1 - num2;
//}
//
//int mutiply(int num1, int num2)
//{
//
//	return num1 * num2;
//}
//
//int divide(int num1, int num2)
//{
//
//	return num1 / num2;
//}