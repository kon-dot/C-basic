//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
////�����׼����   written by �˲���(sakual ^ v ^ )
//
////int main()							//��������棨���Ž��飩
////{
////	float num_1 = 0;				//��һ��������������
////	float num_2 = 0;				//�ڶ���������������
////	char operator = 0;				//�������
////	int success = 0;				//�жϼ���ɹ�����־λ
////	float result = 0;				//�����Ľ��5
////
////	printf("��������������ʽ��:");//���û��������
////
////	scanf("%f%c%f", &num_1, &operator,&num_2);				//���������������ַ�
////
////	if ((num_1 < 0) || (num_1 > 9) || (num_2 < 0) || (num_2 > 9))		//�жϲ�������������Ƿ�Ϊ0��9ֱ�ӵĸ�λ��
////	{
////		printf("����ʧ��QaQ");
////		return 0;
////	}
////	switch (operator)				//����������Ž��м���;֪ʶ��:http://t.csdnimg.cn/k8Pdq
////	{
////	case '+'://�����������淶
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
////		if (num_2 != 0)				//��ֹ���ֳ���Ϊ0�����
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
////	if (success == 1)				//���ݱ�־λ���������
////	{
////		printf("������Ϊ%.2f", result);
////	}
////	else
////	{
////		printf("����ʧ��QaQ");
////	}
////
////	return 0;
////
////}
//
//
//int main10()							//�ַ��������棨�ѵ��������գ�
//{
//	float num_1 ;				//��һ��������������
//	float num_2 ;				//�ڶ���������������
//	char operator ;				//�������
//	char str_1[10] = {0};			//�����ַ���
//	int success ;				//�жϼ���ɹ�����־λ
//	float result ;				//�����Ľ��
//
//	printf("��������������ʽ��:");//���û��������
//
//	scanf("%s", str_1);				//�����ַ���
//	if (strlen(str_1) != 3)			//�ж��ַ����Ƿ�Ϊ�����ַ����ȣ��粻��ֱ�ӽ���;֪ʶ��:http://t.csdnimg.cn/QWmNJ
//	{
//		printf("����ʧ��QaQ");
//		return 0;
//	}
//	//�ַ�������;֪ʶ��:http://t.csdnimg.cn/vFDlL
//	num_1 = str_1[0] - '0';			//��ȡ�ַ�asciiֵ,תΪ�ַ���Ӧ����,������float�ͱ�����
//	operator = str_1[1];			//�����������ȡ
//	num_2 = str_1[2] - '0';			//��ȡ�ַ�asciiֵ,תΪ�ַ���Ӧ����,������float�ͱ�����
//
//	if ((num_1 < 0) || (num_1 > 9) || (num_2 < 0) || (num_2 > 9))		//�жϲ�������������Ƿ�Ϊ0��9ֱ�ӵĸ�λ��
//	{
//		printf("����ʧ��QaQ");
//		return 0;
//	}
//
//	switch (operator)				//����������Ž��м���
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
//		if (num_2 != 0)				//��ֹ���ֳ���Ϊ0�����
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
//	if (success == 1)				//���ݱ�־λ���������
//	{
//		printf("������Ϊ%.2f", result);
//	}
//	else
//	{
//		printf("����ʧ��QaQ");
//	}
//
//	return 0;
//}
//
//
//
