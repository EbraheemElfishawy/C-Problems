//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef unsigned char u8;

u8 count_OccurenceOfAnElement(u8 *arr, u8 size, u8 n)
{
	u8 count = 0;
	u8 i     = 0;
	for ( i = 0; i < size; i++)	
	{
		if (arr[i] == n)
		{
			count ++;
		}
	}
	return count;
}
int main()
{
	start();
	u8 number  = 8;
	u8 arr[10] = {1,5,4,7,5,8,3,2,4,8};
	u8 size    = sizeof(arr)/ sizeof(*arr);
	u8 count   = 0;
	count      = count_OccurenceOfAnElement(arr,size,number);
	printf("%d is found %d time(s)\n", number, count);
	
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