//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//
//int main(){
//
//
//	long long a = 200L;                           /*  void����ָ����Կ���������ͽ��ޣ������������Ӽ�����ȡ��ֵ��
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
//	//��void���͵�ָ��ת��Ϊchar���͵�ָ��
//	char* pc1 = p1;
//	char* pc2 = p2;
//	//char temp = 0;
//	for (int i = 0; i < len; i++)
//	{													//char���Ϳ��������洢��ֵ��
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