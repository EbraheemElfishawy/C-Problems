
#include<stdio.h>
#include<stdlib.h>
int HIGH = 10 -1;
int LOW  = 0;
int MIDDLE = 0;
int Binary_Search(int *arr, int size, int n)
{
	int high = size -1;
	int low  = 0;
	int middle = 0;
	middle = ((high+low)/2);
	
	while(high >= low)
	{
		middle = ((high+low)/2);
		if ( n == arr[middle] )
		{
			return middle;
		}
		else if(n > arr[middle])
		{
			low = middle+1;
		}
		else if (n < arr[middle])
		{
			high = middle-1;
		}
		else
		{
			
		}
	}
}

int Binary_Search_Recursive(int *arr, int size, int n)
{
	
	MIDDLE = ((HIGH+LOW)/2);
	if ( n == arr[MIDDLE] )
	{
		return MIDDLE;
	}
	else if(n > arr[MIDDLE])
	{
		LOW = MIDDLE+1;
		Binary_Search_Recursive(arr, size, n);
	}
	else if (n < arr[MIDDLE])
	{
		HIGH = MIDDLE-1;
		Binary_Search_Recursive(arr, size, n);
	}
	else
	{
		
	}
}
int main()
{
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int x = Binary_Search(arr,10,6);
	//printf("The index = %d\n",x);
	int y = Binary_Search_Recursive(arr,10,5);
	printf("The index = %d\n",y);
	
}
