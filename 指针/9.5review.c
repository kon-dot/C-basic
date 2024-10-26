//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//	char str_1[10] = { 0 };
//	printf("请输入你想计算的式子：");
//	scanf("%s", &str_1);  //scanf_s 是VS特有的函数，scanf_s("%d",num,5);  需指定缓冲区的大小。
//	int num1;
//	int num2;
//	char operator;
//	int sum;
//	
//	if (strlen(str_1)!=3)
//	{	
//		printf("计算失败QaQ");
//		return 0;
//	}
//
//	
//	
//	num1 = str_1[0] - '0'; //把数字字符转换为整数  格式：字符-'0'  反之+'0'
//	num2 = str_1[2] - '0'; 
//	operator=str_1[1];
//
//
//	switch (operator)
//	{
//	case '+':
//		sum = num1 + num2;
//		printf("%d\n", sum);
//		break;
//	case '-':
//		sum = num1 - num2;
//		printf("%d\n", sum);
//		break;
//	case '*':
//		sum = num1 * num2;
//		printf("%d\n", sum);
//		break;
//	case '/':
//		if (num2!=0)
//		{
//			sum = num1 / num2;
//			printf("%d\n", sum);
//			break;
//		}
//		else
//		{
//			printf("程序错误");
//			break;
//
//		}
//	default:
//		break;
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}