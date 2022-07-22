//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int calculate_FactorialIteration(int n)
{
	int fact = 1;
	while(n>1)
	{
		fact *= n;
		n--;
	}
	return fact;
}
int calculate_FactorialRecursion(int n)
{	
		if ( n == 0)
		{
			return 1;
		}
		return n * calculate_FactorialRecursion(n-1);
}
int main()
{
	start();
	int factorial = 0;
	int number    = 4;
	factorial     = calculate_FactorialIteration(number);
	printf("Factorial of %d using iteration is %d\n", number, factorial);
	
	factorial     = calculate_FactorialRecursion(number);
	printf("Factorial of %d using recursion is %d\n", number, factorial);
	
	
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