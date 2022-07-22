//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
#define SIZE_1 	4
#define SIZE_2	6
#define SIZE_3	SIZE_1+SIZE_2
int* MergeTwoArraysWithOneLoop(int *arr1, int size1,int *arr2, int size2)
{
	static int arr3[SIZE_3] = {0};
	int size3 = size1+size2;
	int i = 0;
	
	for(i = 0; i < size3; i++)
	{
		if(i < size1)
		{
			arr3[i] = arr1[i];
		}
		else if(i >= size1)
		{
			arr3[i] = arr2[i - size1];
		}
	}
	return arr3;
}
int main()
{
	start();
	int i = 0;
	int arr1[SIZE_1] = {1,2,3,4};
	int arr2[SIZE_2] = {5,6,7,8,9,10};
	int *arr3 = MergeTwoArraysWithOneLoop(arr1,SIZE_1,arr2,SIZE_2);
	
	for(i = 0; i < SIZE_3; i++)
	{
		printf("arr3[%d] = %d \n",i,arr3[i]);
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