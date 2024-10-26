#include<stdio.h>

//int main(){
//	//二维数组的第二种定义方式
//
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 1,2,3,4 ,5 };
//	int arr3[] = { 1,2,3,4 ,5,6 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//	//遍历数组arr
//
//	int len1 = sizeof(arr1) / sizeof(int);
//	int len2 = sizeof(arr2) / sizeof(int);
//	int len3 = sizeof(arr3) / sizeof(int);
//	int len[] = { len1,len2, len3 };
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		for(int j=0;j<len[i];j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	int** p = &arr[0];     //或者可以这样写：int** p=arr;   arr本质上就是一个一维数组
//	for (int i = 0; i < 3; i++)
//	{
//		for(int j=0;j<len[i];j++)
//		{
//			printf("%d", *(*p + j));
//		
//		}
//		printf("\n");
//		p++;
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
//
//
//
//
//}