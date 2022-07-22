//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
 int new_arr[10] = {0};

void RemoveDuplicated(int *arr, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	for (i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(arr[i] == arr[j])
			{
				arr[j] = '\0';
			}
			if(arr[i]!='\0')
			{
            new_arr[k] = arr[i];
			k++;
			break;
			} 
		}
	}
	new_arr[k+1] = '\0';
}
void remove_repeated(int*arr,int size)
{
	int temp[8]={0};
	int k=0;
	for(int i=0;i<size;i++)
	{
		if(temp[arr[i]]==0)
		{
			arr[k]=arr[i];
			temp[arr[i]]++;
			k++;
		}
	}
	
}
int main()
{
	start();
	int arr[10] = {1,2,3,3,3,4,7,6,8,7};
	/*
	RemoveDuplicated(arr,10);
	int i = 0;
	for (i = 0; new_arr[i] != '\0'; i++)
	{
	printf("new_arr[%d] = %d\n", i, new_arr[i]);
	}
	*/
	remove_repeated(arr,10);
	int i = 0;
	for (i = 0; i<10; i++)
	{
	printf("arr[%d] = %d\n", i, arr[i]);
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