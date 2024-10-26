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
		printf("第一季度最大");
	}
	else if (b==max)
	{
		printf("第二季度最大");
	}
	else if (c == max)
	{
		printf("第三季度最大");
	}
	else if (d == max)
	{
		printf("第四季度最大");
	}

	return 0;
}

/*  1.函数不调用就不执行
    2.函数名不能重复
	3.函数与函数之间是平级关系，不能嵌套定义
	4.自定义函数写在main函数下面，需要在上方申明
	5.return下面，不能编写代码，永远执行不到
	6.函数的返回值类型为void，表示没有返回值，return可以省略不写
	  如果书写了return，后面不能跟具体的数据，仅表示结束函数。   */