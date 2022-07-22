//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int check_PowerOfTwo(int n, int* power)
{
	int i         = 0;
	int remainder = n;
	int div       = n;
	int result    = 0;
	while(div>=2)
	{
		remainder  = div%2;
		div       /= 2;
		
		if( (div == 2) &&(remainder == 0))
		{	
			i++;
			result = 1;
			*power = i;
			//printf("div = %d  and remainder %d\n",div,remainder);
			break;
		}
		else
		{
			//printf("**div = %d  and remainder %d\n",div,remainder);
			result = 0;
			*power = 0;
		}
	}
	return result;
}

int main()
{
	start();
	int number = 20;
	int power  = 0;
	
	int check  = check_PowerOfTwo(number,&power);
	if(check == 1)
	{
		printf("%d is a power of 2 and it is to power %d\n",number,power);
	}
	else
	{
		printf("%d is not a power of 2",number);
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