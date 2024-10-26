#include <stdio.h>
#include<string.h>
int main() {
	/* 字符串定义的两种方式：  */
	//方式一：字符串+双引号
	char str[] = "abc";     //第一种方式细节：1.在底层实际存储的时候"abc"转换成字符串数组进行保存，并且在末尾还要再加上'\0'
	                        //{'a','b','c','\0'};
	                        //detail2：数组的长度，要写的话，要把结束标记的空间给预留出来
	                       // detail3：字符串+双引号的方式定义字符串，内容是可以发生改变的
	str[0] = 'Q';
	printf("%s\n", str);


	//二、利用指针+双引号的方式定义字符串
	char* str1 = "ab cd";
	char* str2 = "abcd";
	//detail 1: 在底层，实际存储的时候，c语言还是会帮助我们把字符串“abcd”转换成字符数组进行保存，并且在末尾还要加上'\0'

	//detail 2：会放在只读常量区
	//只读常量区特点：1.内容不可修改
	 //2.里面定义的字符串可以复用
	printf("%p\n", str1);
	printf("%p\n", str2);
	size_t len = strlen(str1);
	printf("%c", *str1);
	printf("%zu", len);
	/*for (int i = 0; i < 5; i++)
	{
		printf("%c", *str1);
		str1++;
	}*/



















}