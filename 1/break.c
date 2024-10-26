#include<stdio.h>

int main() {
	printf("*  1  2  3  4  5  6  7  8  9\n");
	printf("----------------------------\n");
	for (int i = 1; i <=9; i++)
	{
		int a = 1;
		printf("%d", i);
		for (int j = 9; j >= 1; j--)
		{
			
			if (j <= i) {
				printf("%3d", i * a);
				a++;
			}
			else {
				printf("   ");
			}
			

		}
		printf("\n");

	}



	

}