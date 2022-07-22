//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int return_SumofDigitsOfInteger(int n) // n = 1234
{
	int sum = 0;
	while(n !=0)
	{
		sum += n%10;
		n   /= 10;
	}
	return sum;
}
int main()
{
	start();
	int number = 0;
	int sum    = 0;
	
	number = 1234;
	sum = return_SumofDigitsOfInteger(number);
	printf("Sum of digits of %d is %d \n", number,sum);
	
}




















void start(void)
{
	system("cls");
	printf("\
	#############################################\n\
	# This code is made by: Ebraheem El-Feshawy #\n\
	# Description:                              #\n\
	# Date       :                              #\n\
	#############################################\n\n\n");
}