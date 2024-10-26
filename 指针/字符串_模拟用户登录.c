//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	//利用字符串定义正确的用户名和密码
//	char* rightUsername = "zhangsan";
//	char* rightPassword = "123456";
//	
//
//	for (int i = 1; i <=3; i++)
//	{	
//		//模拟用户登录
//		char username[100];
//		char password[100];
//		printf("请输入用户名：\n");
//		scanf("%s", username);
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (!strcmp(username, rightUsername) && !strcmp(password, rightPassword))
//		{
//			printf("登录成功\n");
//		}
//		else
//		{	
//			if (i==3)
//			{
//				printf("该用户%s已被锁定", rightUsername);
//			}
//			else
//			{
//				printf("登录失败，还有%d次机会", 3 - i);
//			}
//			
//		}
//
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
//	return 0;
//}