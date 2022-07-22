//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int return_CubicRoot(int n)
{
	int limit  = n/2;
	int result = 0;
	int i      = 0;
	for(i = 1; i < limit; i++)
	{
		result = i*i*i;
		if (result == n)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	start();
	int n = 27;
	int result = 0;
	result = return_CubicRoot(n);
	printf("The cubic root of %d is %d \n", n,result);
	
	
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