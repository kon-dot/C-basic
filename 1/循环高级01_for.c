#include<stdio.h>

int main1000() {

	//int number=2;
	
	int b = 0;
	for(int number=2;number<=100;number++)
	{ 
		int a = 0;
		for (int i = 2; i < number; i++)
		{
			
			if (number % i == 0)
			{

				a++;
			}
		}
		if (a == 0)
		{
			b++;
		}
			
		
		
		

		
	
	}

	printf("��������%d��", b);

}