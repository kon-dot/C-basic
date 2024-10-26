//#include <stdio.h>
//
//int main() {
//    for (int i = 1; i <= 1000; i++)
//    {
//        int sum = 0;
//        int temp = i; // 使用临时变量来存储当前的数字  在 while 循环中直接修改了循环变量 i，这会导致外部的 for 循环的行为变得不可预测，因为 i 的值在每次迭代中都会因为 while 循环而改变，最终可能会变成 0，导致 for 循环提前终止。
//
//                        为了解决这个问题，您应该使用一个与 i 不同的变量来在 while 循环中迭代 i 的每一位数字。通常，我们会使用另一个变量（比如 temp）来存储 i 的值，并在 while 循环中操作 temp 而不是 i。
//        while (temp > 0) 
//        {
//            sum += temp % 10;
//            temp /= 10;
//        }
//        if (sum == 15)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
