//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
/*
void SelectiveSort(int* arr,int size)
{
	int i=0,j=0;
	int temp=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp  = arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}
}*/
void BubbleSort(int* arr,int size)
{
	int i=0,j=0;
	int temp=0;
	int flag=0;
	int n1=1,n2=1;
	for(i=0;i<size;i++)
	{
		n1++;
		for(j=i;j<size-1;j++)
		{
			n2++;
			if(arr[j]>arr[j+1])
			{
				temp  = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("This array is already sorted.\n");
			break;
		}
	}
	printf("You have made %d loop iterations\n",n1*n2);
}

int main()
{
	int arr[10]={1,2,5,4,5,6,3,8,9,10};
	int size= sizeof(arr)/sizeof(*arr);
	//SelectiveSort(arr,size);
	BubbleSort(arr,size);
	//print
	printf("array[10]= {");
	for(int j=0;j<size;j++)
		{
			printf("%d  ",arr[j]);
			
			
		}
	printf("}");
}


/*
int count = 0;
void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1      = *n2;
	*n2      = temp;
}
void sort_BubbleSort(int *arr, int size)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < size-1; i++)
	{
		for(j = 0; j < size -i-1; j++)
		{
			count ++;
			if(arr[j] > arr[j+1])
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
	
	int arr[10] = {5,6,9,7,1,3,4,8,5,0};
	int size = sizeof(arr)/ sizeof(*arr);
	for(i = 0; i < 10; i++)
	{
		printf(" arr[%d] = %d\n",i,arr[i]);
	}
	printf("After Sorting\n");
	sort_BubbleSort(arr,size);
	for(i = 0; i < 10; i++)
	{
		printf(" arr[%d] = %d\n",i,arr[i]);
	}
	printf("Count = %d\n",count);
	
}

*/


















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