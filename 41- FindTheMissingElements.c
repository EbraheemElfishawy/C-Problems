                      //Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
int arr[255];

int return_MissingElement_FromSorted(int *arr,int size)
{
	int i = 0;
	for(i = 0; i < size; i++)
	{
		if((arr[i]) == arr[i+1] -1)
		{
			continue;
		}
		else
		{
			return arr[i]+1;
		}
	}
}

/*int return_MissingElement_FromNotSorted(int *arr,int size)
{
	int i    = 0;
	int j    = 0;
	int flag = 0;
	for ( i = 0; i < size; i++)
	{	
		flag = 0;
		for(j = 0 ; j < size; j++)
		{
			if( (arr[i] == arr[j]-1) || ((arr[i] == arr[j]+1)) )
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return arr[i]+1;
		}
		
	}
	
	return 0;
}*/

int return_MissingElement_FromNotSorted(int *arr,int size)
{
	int i                 = 0;
	int j                 = 0;
	//int missing         = 0;
	int missing_array[10] = {0};
	for ( i = 0; i < size; i++)
	{	
		missing_array[arr[i]] = 1;
	}
	for ( i = 0; i < size; i++)
	{	
		if(missing_array[i] == 0)
		{
			return i;
		}
	}
	
	return -1;
}

int main()
{
	start();
	int arr_Sorted[10]    = {0,1,2,3,4,5,7,8,9};
	int arr_NotSorted[10] = {9,8,1,7,4,5,0,3,2};
	
	int missing = return_MissingElement_FromSorted(arr_Sorted,10);
	printf("The missing element from sorted is %d\n", missing);
	missing     = return_MissingElement_FromNotSorted(arr_NotSorted,10);
	printf("The missing element from not sorted is %d", missing);
	
	
	
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