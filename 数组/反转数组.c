
#include<stdio.h>  

// 声明一个函数，用于打印数组  
//void printarr(int arr[], int len);
//
//int main() {
//    // 定义一个整型数组，大小为5  
//    int arr[5];
//    // 计算数组的长度（因为数组大小在编译时就已确定，所以这里直接除以一个整型的大小）  
//    int len = sizeof(arr) / sizeof(int);
//
//    // 循环读取用户输入的5个整数  
//    for (int i = 0; i < len; i++) {
//        printf("请输入第%d个整数: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    printf("-------------------------------------\n");
//    printarr(arr, len);
//    
//    int i = 0;
//    int j = len - 1;
//    while(i<j)
//    {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        
//        i++;
//        j--;
//    }
//
//
//
//    printf("-------------------------------------\n");
//    // 调用函数打印数组  
//    printarr(arr, len);
//
//    return 0; // 主函数返回0，表示程序正常结束  
//}
//
//// 定义printarr函数，用于打印数组  
//void printarr(int arr[], int len) {
//    // 遍历数组，打印每个元素  
//    for (int i = 0; i < len; i++) {
//        printf("%d\n", arr[i]);
//    }
//}