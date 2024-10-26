//#include<stdio.h>
//
//int main() {
//
//	/*  二维数组定义的第一种格式：m:表示二维数组的长度
//								n:表示二维数组中每一个一维数组的长度
//							arr[m][n]=
//							{
//								{1,2,3,4,5},
//								{1,2,3,4,5},
//								{1,2,3,4,5}
//	                       };   */
//
//	//定义一个二维数组
//	int arr[3][5] =
//	{
//		{1,2,3,4,5},
//		{11,22,33,44,55},
//		{111,222,333,444,555}                                          //在一维数组中，数组名代表的是数组首元素的地址
//                                                                      // 那么一维数组中的元素值呢？
//
///*我们所熟悉且最常见的就是用[]表示法来获取数组元素值，
//
//所以 a[i] 就是 第 i 个元素的值，既然 a + i 是第 i 个元素的地址，那么我们知道地址引用其值的方法就是在前面加一个“ * ”符号， 所以 * (a + i) = a[i] = 第 i 个元素的值。
//
//需要明确， a[i] 和 * (a + i) 是无条件等价的（非常重要）！！！*/
//
//
//
//
//	};
//	
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}	
//		printf("\n");
//
//	}*/
//
//	int(*p)[5] = arr;
//	for (int i = 0; i < 3; i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			printf("%d ", *(*p + j));
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
//}