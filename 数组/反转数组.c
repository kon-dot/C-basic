
#include<stdio.h>  

// ����һ�����������ڴ�ӡ����  
//void printarr(int arr[], int len);
//
//int main() {
//    // ����һ���������飬��СΪ5  
//    int arr[5];
//    // ��������ĳ��ȣ���Ϊ�����С�ڱ���ʱ����ȷ������������ֱ�ӳ���һ�����͵Ĵ�С��  
//    int len = sizeof(arr) / sizeof(int);
//
//    // ѭ����ȡ�û������5������  
//    for (int i = 0; i < len; i++) {
//        printf("�������%d������: ", i + 1);
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
//    // ���ú�����ӡ����  
//    printarr(arr, len);
//
//    return 0; // ����������0����ʾ������������  
//}
//
//// ����printarr���������ڴ�ӡ����  
//void printarr(int arr[], int len) {
//    // �������飬��ӡÿ��Ԫ��  
//    for (int i = 0; i < len; i++) {
//        printf("%d\n", arr[i]);
//    }
//}