#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main10() {


    /* demand1 : 键盘录入your girlfriend's name
      format:我亲亲女朋友的名字是：xxx

      字符串变量的定义方式：
            数据类型 变量名【大小】= 字符串
            char str[内存占用大小]="aaa"
      内存占用大小计算方式：
            英文：1个字母，符号，数字占用一个字节
            中文：VS或VC中，默认情况下，一个中文占两个字节
            结束标记占一个字节*/


    char st[100];

    printf("请输入您女朋友的名字：\n");
    scanf("%s", &st);

    printf("我亲亲女朋友的名字是:%s",st);


    return 0;

}