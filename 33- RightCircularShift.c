//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef unsigned char u8;
void RightCircularShift(u8 *n, u8 step)
{	
	u8 temp = 0;
	u8 i    = 0;
	for(i = 0 ; i <step; i++)
	{
		temp  = ((*n>>0) & 1);
		temp  = (temp <<7);
		temp |= (*n >> 1);
		*n    = temp;
	}
}

int main()
{
	start();
	u8 number = 0b10011001; // ox99 => 0b11001100 = 0xCC
	u8 step   = 1;
	RightCircularShift(&number, step);
	
	printf("Shifted number = %x",number);
	
	
	
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