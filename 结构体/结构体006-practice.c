//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//struct spot {
//	char name;
//	int count;                          //心得：写结构体时，把小的数据类型写在前面，大的数据类型写在后面
//};
//int main() {
//	//定义数组存储4个spot类型的变量
//	struct spot arr[4] = { {'A',0},{'B',0} ,{'C',0} ,{'D',0} };
//	srand(time(NULL));
//
//	for(int i=0;i<80;i++)
//	{
//		int choice = rand() % 4;
//		arr[choice].count++;
//	}
//	int max = arr[0].count;
//	
//	for (int i = 0; i < 4; i++)
//	{
//		if(arr[i].count>max)
//		{
//			max = arr[i].count;
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if(arr[i].count==max)
//		{
//			printf("%c %d\n", arr[i].name, arr[i].count);
//		}
//	}
//
//
//
//
//
//
//
//	for(int i = 0; i < 4; i++)
//	{
//		printf("%c %d\n", arr[i].name, arr[i].count);
//	}
//	printf("%zu", sizeof(arr));
//
//	return 0;
//}