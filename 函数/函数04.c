#include<stdio.h>


int sumquarter(int month1, int month2, int month3)
{
	int sum = month1 + month2 + month3;

	return sum;

}

int main() {

	int a = sumquarter(10, 20, 15);
	int b = sumquarter(20, 30, 17);
	int c = sumquarter(19, 17, 20);
	int d = sumquarter(23, 21, 19);

	int num1 = a > b ? a : b;
	int num2 = c > d ? c : d;
	int max = num1 > num2 ? num1 : num2;
	printf("%d\n", max);
	if (a==max)
	{
		printf("��һ�������");
	}
	else if (b==max)
	{
		printf("�ڶ��������");
	}
	else if (c == max)
	{
		printf("�����������");
	}
	else if (d == max)
	{
		printf("���ļ������");
	}

	return 0;
}

/*  1.���������þͲ�ִ��
    2.�����������ظ�
	3.�����뺯��֮����ƽ����ϵ������Ƕ�׶���
	4.�Զ��庯��д��main�������棬��Ҫ���Ϸ�����
	5.return���棬���ܱ�д���룬��Զִ�в���
	6.�����ķ���ֵ����Ϊvoid����ʾû�з���ֵ��return����ʡ�Բ�д
	  �����д��return�����治�ܸ���������ݣ�����ʾ����������   */