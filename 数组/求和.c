//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int contains(int arr[], int len, int num);
//
//int main()
//{
//	srand(time(NULL));
//	int arr[10] ;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; )
//	{	  
//		  int num = rand() % 100 + 1;
//		  int flag = contains(arr, len, num);		//  int flag = contains(arr[i], len, num);	����
//		  if(!flag)
//		  {
//			  arr[i] = num;
//			  i++;                                         //����дΪ int arr[i]=rand() % 100 + 1; �൱�����¶�������arr
//		  }
//	}
//
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//		sum = sum + arr[i];
//	}
//	printf("%d", sum);
//
//
//
//
//
//
//}
//int contains(int arr[], int len, int num)
//{
//	for(int i=0; i<len; i++)
//	{
//		if(arr[i]==num)
//		{
//			return 1;
//		}
//	
//	}
//
//	return 0;
//}