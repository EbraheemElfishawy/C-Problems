//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef unsigned char u8;
u8 add_Two_u8Numbers(u8 x, u8 y)
{
	int sum = 0;
	u8 result = 0;
	//u8 sum = 0;
	sum = x + y;
	if(sum < 255)
	{
		result = sum;
	}
	else
	{
		
	}
}
int main()
{
	start();
	u8 x   = 255;
	u8 y   = 100;
	u8 sum = 0;
	sum    = add_Two_u8Numbers(x,y);
	printf("Sum = %d \n",sum);
	
	
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