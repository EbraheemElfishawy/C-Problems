//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int AverageofArray(int *arr, int size)
{
	int i   = 0;
	int sum = 0;
	for(i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum/size;
}
int main()
{
	start();
		int arr[10]  = {1,2,3,4,5,6,7,8,9,10};
	int average = AverageofArray(arr,10);
	printf("The Average = %d", average);
	
	
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