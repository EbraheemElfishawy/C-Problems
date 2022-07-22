//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
int check_PrimeOrNot(int n)
{
	int result = 0;
	switch(n)
	{
		case 0 : result = 0; break;
		case 1 : result = 0; break;
		case 2 :
		case 3 :
		case 5 :
		case 7 : result = 1; break;
		default:
				if ( ((n%2)!= 0) && ((n%5)!= 0) && ((n%7)!= 0))
				{
					result = 1;
					break;
				}
				else
				{
					result = 0;
					break;
				}
		
	}
	return result;
}

int main()
{
	start();
	int i      = 0;
	int result = 0;
	i          = 15;
	for( i = 0; i <= 50 ; i++)
	{
	result     = check_PrimeOrNot(i);
	switch(result)
	{
		case 0 : printf(" %d is not a prime number\n",i); break;
		case 1 : printf(" %d is     a prime number\n",i); break;
		default: break;
	}
	}

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