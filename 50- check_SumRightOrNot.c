//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef unsigned char u8;

u8 check_SumRightOrNot ( u8 *data, u8 size)
{
	int sum    = 0;
	int i      = 0;
	int result = 0;
	for(i = 0; i < size -2; i++)
	{
		sum += data[i];
	}
	if ( (sum == data[size-1])&&(sum == data[size-2]))
	{
		result = 1;
	}
	return result;
}

int main()
{
	start();
	u8 arr[10] = {1,0,1,1,0,1,1,1,6,6};
	u8 size    = sizeof(arr)/ sizeof(*arr);
	u8 result  = 0;
	result     = check_SumRightOrNot(arr,size);
	if (result == 1)
	{
		printf(" Right data\n");
	}
	else 
	{
		printf(" Wrong data\n");
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