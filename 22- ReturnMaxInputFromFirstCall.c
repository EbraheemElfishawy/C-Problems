//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int max   = 0;
int print_Integer (int x)
{	
	printf(" The number you entered is %d \n",x);
	if(x > max)
	{
		max = x;
	}
	return max;
}
int main()
{
	start();
	int i = 0;
	int arr[10] = {1,3,5,7,9,4,6,15,25,60};
	for (i = 0; i < 10; i++)
	{
		print_Integer(arr[i]);
	}
	printf(" \n The max entered is %d", max);
	
	
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