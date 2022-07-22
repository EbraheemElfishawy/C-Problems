//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
void return_MaxElementAndItsTimes( int *arr, int size, int *max_element, int *max_times)
{
	int max   		= 0;
	int count 		= 0;
	int i     		= 0;
	for(i = 0; i < size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			count = 0;
		}
		if(arr[i] == max)
		{
			count ++;
		}
	}
	*max_element = max;
	*max_times = count;
}

int main()
{
	start();
	int arr[10] = {1,2,4,3,8,9,7,9,9,4};
	int size    = sizeof(arr)/sizeof(*arr);
	int max 	  = 0;
	int max_times = 0;
	
	return_MaxElementAndItsTimes(arr, size, &max, &max_times);
	printf("The max element is %d, and it is found %d time(s)\n",max, max_times);
	
	
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