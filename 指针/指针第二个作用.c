//#include<stdio.h>
//
//void getMaxandMin(int arr[], int len, int* max, int* min);
//
//int main()                                                         //输出多个值
//{
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	int max = arr[0];
//	int min = arr[0];
//
//	getMaxandMin(arr, len, &max, &min);
//	printf("%d,%d",max,min);
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
//
//void getMaxandMin(int arr[],int len,int* max,int* min)
//{
//	
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//	for (int i = 1; i < len; i++)
//	{
//		if(arr[i]<*min)
//		{
//			*min = arr[i];
//		}
//		
//	}
//
//
//}