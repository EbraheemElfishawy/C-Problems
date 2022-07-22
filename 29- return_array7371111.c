//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
void swap (int*x, int *y)
{
	int temp;
	temp = *x;
	*x   = *y;
	*y   = temp;
	
}
void return_array(int *arr, int size, int n)
{
	int i = 0;
	int j = 0;
	
	for(i = 0 ; i < size; i++)
	{
		for(j = 0; j < size-1; j++)
		{
			if(arr[j] == n)
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main()
{
	start();
	int i = 0;
	int arr[9] = {1,2,5,7,1,1,3,1,7};
	
	return_array(arr,9,7);
	for(i = 0; i < 9; i++)
		{
			printf("%d,",arr[i]);
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