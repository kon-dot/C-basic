//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//	char str_1[10] = { 0 };
//	printf("��������������ʽ�ӣ�");
//	scanf("%s", &str_1);  //scanf_s ��VS���еĺ�����scanf_s("%d",num,5);  ��ָ���������Ĵ�С��
//	int num1;
//	int num2;
//	char operator;
//	int sum;
//	
//	if (strlen(str_1)!=3)
//	{	
//		printf("����ʧ��QaQ");
//		return 0;
//	}
//
//	
//	
//	num1 = str_1[0] - '0'; //�������ַ�ת��Ϊ����  ��ʽ���ַ�-'0'  ��֮+'0'
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
//			printf("�������");
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