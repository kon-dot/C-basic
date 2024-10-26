//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
////超简易计算机   written by 菜菜朱(sakual ^ v ^ )
//
////int main()							//逐个解析版（入门建议）
////{
////	float num_1 = 0;				//第一个参与计算的数字
////	float num_2 = 0;				//第二个参与计算的数字
////	char operator = 0;				//运算符号
////	int success = 0;				//判断计算成功与否标志位
////	float result = 0;				//运算后的结果5
////
////	printf("请输入您想计算的式子:");//向用户提出需求
////
////	scanf("%f%c%f", &num_1, &operator,&num_2);				//读入数字与运算字符
////
////	if ((num_1 < 0) || (num_1 > 9) || (num_2 < 0) || (num_2 > 9))		//判断参与运算的数字是否为0到9直接的各位数
////	{
////		printf("计算失败QaQ");
////		return 0;
////	}
////	switch (operator)				//根据运算符号进行计算;知识点:http://t.csdnimg.cn/k8Pdq
////	{
////	case '+'://这里缩进更规范
////	{
////		result = num_1 + num_2;
////		success = 1;
////		break;
////	}
////	case '-':
////	{
////		result = num_1 - num_2;
////		success = 1;
////		break;
////	}
////	case '*':
////	{
////		result = num_1 * num_2;
////		success = 1;
////		break;
////	}
////	case '/':
////	{
////		if (num_2 != 0)				//防止出现除数为0的情况
////		{
////			result = num_1 / num_2;
////			success = 1;
////		}
////		else
////		{
////			success = 0;
////		}
////		break;
////	}
////	default:
////		success = 0;
////		break;
////	}
////
////	if (success == 1)				//根据标志位输出结果与否
////	{
////		printf("计算结果为%.2f", result);
////	}
////	else
////	{
////		printf("计算失败QaQ");
////	}
////
////	return 0;
////
////}
//
//
//int main10()							//字符串解析版（难但建议掌握）
//{
//	float num_1 ;				//第一个参与计算的数字
//	float num_2 ;				//第二个参与计算的数字
//	char operator ;				//运算符号
//	char str_1[10] = {0};			//载体字符串
//	int success ;				//判断计算成功与否标志位
//	float result ;				//运算后的结果
//
//	printf("请输入您想计算的式子:");//向用户提出需求
//
//	scanf("%s", str_1);				//读入字符串
//	if (strlen(str_1) != 3)			//判断字符串是否为三个字符长度，如不符直接结束;知识点:http://t.csdnimg.cn/QWmNJ
//	{
//		printf("计算失败QaQ");
//		return 0;
//	}
//	//字符串解析;知识点:http://t.csdnimg.cn/vFDlL
//	num_1 = str_1[0] - '0';			//读取字符ascii值,转为字符对应数字,并存入float型变量中
//	operator = str_1[1];			//把运算符号提取
//	num_2 = str_1[2] - '0';			//读取字符ascii值,转为字符对应数字,并存入float型变量中
//
//	if ((num_1 < 0) || (num_1 > 9) || (num_2 < 0) || (num_2 > 9))		//判断参与运算的数字是否为0到9直接的个位数
//	{
//		printf("计算失败QaQ");
//		return 0;
//	}
//
//	switch (operator)				//根据运算符号进行计算
//	{
//	case '+':
//		result = num_1 + num_2;
//		success = 1;
//		break;
//
//	case '-':
//		result = num_1 - num_2;
//		success = 1;
//		break;
//
//	case '*':
//		result = num_1 * num_2;
//		success = 1;
//		break;
//
//	case '/':
//		if (num_2 != 0)				//防止出现除数为0的情况
//		{
//			result = num_1 / num_2;
//			success = 1;
//		}
//		else
//		{
//			success = 0;
//		}
//		break;
//	default:
//		success = 0;
//		break;
//	}
//
//	if (success == 1)				//根据标志位输出结果与否
//	{
//		printf("计算结果为%.2f", result);
//	}
//	else
//	{
//		printf("计算失败QaQ");
//	}
//
//	return 0;
//}
//
//
//
