#include<stdio.h>

int main4(){
	
	//short int long  long long
	//short 短整型 Windows 2个字节
	short a = 10;
	printf("%d\n", a);

	//int 整数 Windows 4个字节
	int b = 100;
	printf("%d\n", b);

	//long 长整型 Windows 4个字节
	long c = 1000L;
	printf("%ld\n", c);

	//long long 超长整型 Windows 8个字节
	long long d = 10000LL;
	printf("%lld\n", d);


	//利用sizeof测量每一种数据类型占多少字节
	//sizeof(变量名/数据类型）
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