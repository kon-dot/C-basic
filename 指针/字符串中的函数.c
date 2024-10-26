//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
////int main() {
////	char* str = "abc";
////	char str1[100] = "qwer";
////	char str2[100] = { 't','y','u','\0' };
//	printf("------strlen---------------\n");
//	//细节1：strlen()函数统计长度时，不计算结束标记
//	//细节2：windowsOS中，一个中文占两个字节
//	/*int len1 = strlen(str);
//	int len2 = strlen(str1);
//	int len3 = strlen(str2);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);*/
//	printf("------------strcat()拼接------------\n");
//	//细节1：str1←←←←str2
//	//前提1：第一个字符串是可以被修改的
//	//前提2：第一个字符串中剩余空间可以容纳拼接的字符串
//	//strcat(str1, str2);
//	//printf("%s\n", str1);//qwertyu
//	//printf("%s\n", str2);//tyu
//	printf("------------strcpy(拷贝)------------\n");
//	//strcpy(str1, str2);
//	//printf("%s\n", str1);//tyu
//	//printf("%s\n", str2);//tyu
//	printf("-------------strcmp(比较)-----------\n");
//	//顺序和内容完全一致，才叫做字符串一致
//	//完全一样：0
//	//有一个不一样：非0
//	/*int res = strcmp(str1, str2);
//	printf("%d\n", res);*/
//	printf("------------—_strlwr(变小写)------------\n");
//	/*_strlwr(str1);
//	printf("%s", str1);*/
//	printf("------------_strupr(变大写)------------\n");
//	_strupr(str1);
//	printf("%s", str1);
//
//
//
//
////}