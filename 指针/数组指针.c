//#include<stdio.h>
//void sef(int (*arr)[3])
//{
//	printf("%d", arr[1][2]);
//}
//
//int main() {
//
//	//int arr[] = { 12,13,15,16,17,18,19 };
//	//int* p1 =arr;                                //别忘了&
//	//int len = sizeof(arr) / sizeof(int);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	printf("%d\n", *p1);
//	//	p1 = p1 + 1;
//	//	
//	//}
//
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	printf("%p\n", arr); //                    arr == &arr[0]  指向一维数组
//	printf("%p\n", arr[0]+1);  //  &arr[0][1]
//	printf("%p\n", &arr[0][1]);  //  &arr[0][1]
//	printf("%p\n", *arr+1);  //                *arr == arr[0] == &arr[0][1] 指向int
//	printf("%p\n", arr[1]);
//	printf("%p\n", arr+1);
//	printf("%d\n", *(*(arr+1)));
//
//	int(*p)[3] = arr;
//	sef(p);
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
//
//}