//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//
//int main(){
//
//
//	long long a = 200L;                           /*  void类型指针可以跨过所有类型界限，但不能用来加减，获取数值。
//													
//													
//													
//													
//													*/
//	long long b = 100L;
//	swap(&a, &b, 8);
//	printf("a=%lld,b=%lld", a, b);
//	char v = 0;
//
//	printf("v=%d\n", v);
//}
//
//void swap(void* p1,void* p2,int len)
//{
//	//把void类型的指针转换为char类型的指针
//	char* pc1 = p1;
//	char* pc2 = p2;
//	//char temp = 0;
//	for (int i = 0; i < len; i++)
//	{													//char类型可以用来存储数值。
//		char temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
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
//}