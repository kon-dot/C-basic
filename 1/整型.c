#include<stdio.h>

int main4(){
	
	//short int long  long long
	//short ������ Windows 2���ֽ�
	short a = 10;
	printf("%d\n", a);

	//int ���� Windows 4���ֽ�
	int b = 100;
	printf("%d\n", b);

	//long ������ Windows 4���ֽ�
	long c = 1000L;
	printf("%ld\n", c);

	//long long �������� Windows 8���ֽ�
	long long d = 10000LL;
	printf("%lld\n", d);


	//����sizeof����ÿһ����������ռ�����ֽ�
	//sizeof(������/�������ͣ�
	printf("% zu\n", sizeof(short));
	printf("% zu\n", sizeof(a));
	
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(b));

	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(c));

	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(d));

	return 0;
}