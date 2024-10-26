//#include<stdio.h>
//
//int main()
//{
//	/*	冒泡排序：
//			1.相邻的元素两两比较，大的放右边，小的放左边。
//			2.第一轮比较完毕之后，最大值已经确定，第二轮可以少循环一次，后面以此类推
//			3.如果数组中有N个数据，总共我们只要执行N-1次
//
//	*/
//	
//	int arr[] = { 3,5,2,1,4 };
//	int len = sizeof(arr) / sizeof(int);
//
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len - 1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
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
//}