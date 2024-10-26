//#include<stdio.h>
//
//
//struct student {
//	char name[100];
//	int age;
//};
//
//
//int main() {
//	
//	struct student stu1 = { "zhagnsan",18 };
//	struct student stu2 = { "lisi",18 };
//	struct student stu3 = { "wangermanzi",19 };
//
//	struct student stuArr[] = {stu1,  stu2, stu3};
//	for (int i = 0; i < 3; i++)
//	{
//		struct student temp = stuArr[i];
//		printf("名字为%s\n", temp.name);
//		printf("年龄为%d\n", temp.age);
//	}
//}
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//typedef struct student
//{
//    int num;
//    char name[20];
//    int grade1;
//    int grade2;
//    int grade3;
//}S;
//
//int main()
//{
//    
//    S arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d %s %d %d %d", &arr[i].num, &arr[i].name, &arr[i].grade1, &arr[i].grade2, &arr[i].grade3);
//        getchar();
//    }
//    double a=0, b=0, c=0;
//    double average1, average2, average3;
//    for (int i = 0; i < 10; i++)
//    {
//        a += arr[i].grade1;
//        b += arr[i].grade2;
//        c += arr[i].grade3;
//    }
//    average1 = a / 10;
//    average2 = b / 10;
//    average3 = c / 10;
//    printf("%.2lf %.2lf %.2lf\n", average1, average2, average3);
//    int max = arr[0].grade1 + arr[0].grade2 + arr[0].grade3;
//    for (int i = 1; i < 10; i++)
//    {
//        if ((arr[i].grade1 + arr[i].grade2 + arr[i].grade3) > max)
//        {
//            max = arr[i].grade1 + arr[i].grade2 + arr[i].grade3;
//        }
//
//    }
//
//    for (int i = 1; i < 10; i++)
//    {
//        if (max == (arr[i].grade1 + arr[i].grade2 + arr[i].grade3))
//        {
//            printf("%d %s %d %d %d", arr[i].num, arr[i].name, arr[i].grade1, arr[i].grade2, arr[i].grade3);
//        }
//    }
//}
