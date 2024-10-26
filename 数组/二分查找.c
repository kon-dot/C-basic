#include<stdio.h>
//int dinarySearch(int arr[], int len, int num);
//
//int main()
//{
//	int arr[] = { 11, 42, 56, 89, 96, 102 };
//	int len = sizeof(arr) / sizeof(int);
//
//	int num = 100;
//	int index = dinarySearch(arr, len, num);
//	printf("%d\n", index);
//
//
//
//}
//
//int dinarySearch(int arr[], int len, int num)
//{
//	int min = 0;
//	int max = len - 1;
//	while(min<=max)
//	{
//		int mid = (min + max) / 2;
//		if(arr[mid]<num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	
//	
//	}
//	return -1;
//
//
//}