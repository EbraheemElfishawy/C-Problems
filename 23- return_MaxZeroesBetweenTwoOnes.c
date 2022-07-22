//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
#define GET_BIT(NUMBER,BIT)   ( (NUMBER>>BIT) &1 )
int return_MaxZeroesBetweenTwoOnes( int number)
{	
	int start         = 0;
	int end           = 0;
	int current_count = 0;
	int max_count     = 0;
	int i             = 0;
	int size          = 8*sizeof(number);
	for(i = 0; i < size; i++)
	{
		if(GET_BIT(number,i))
		{
			start = i;
			break;
		}
	}
	for(i = size-1; i >=0; i--)
	{
		if(GET_BIT(number,i))
		{
			end = i;
			break;
		}
	}
	
	for(i = start; i < end; i++)
	{
		if(GET_BIT(number,i)==0)
		{
			current_count ++;
			if (current_count> max_count)
			{
				max_count = current_count;
			}
			
		}
		else
		{
			current_count = 0;
		}
		
	}
	return max_count;
}
int main()
{
	start();
	int x = 0b00010011000000111111110000000000;
	int max_count = return_MaxZeroesBetweenTwoOnes(x);
	printf("Max Zeroes between two ones is %d",max_count);
	
	
	
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