//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
int compare_TwoArraysHaveSameElements(int *arr1,int *arr2, int size)
{
	int i	       = 0;
	int j	       = 0;
	int flag       = 0;
	int result     = 0;
	int sum1       = 0;
	int sum2       = 0;
	int temp1[255] = {0};
	int temp2[255] = {0};
	int flag_temp  = 0;
	for (i = 0; i < size ; i++)
	{	sum1 += arr1[i];
		sum2 += arr2[i];
		temp1[arr1[i]]++;
		temp2[arr2[i]]++;
		for(j = 0; j< size; j++)
		{	
			if(arr1[i] == arr2[j])
			{
				flag++;
				//printf("flag = %d\n",flag);
				break;
			}
		}
	}
	for(i = 0; i <255; i++)
	{
		if(temp1[i] == temp2[i])
		{
			flag_temp++;
		}
		else
		{
			break;
		}
	}
	printf("flag_temp = %d\n",flag_temp);
	if ((flag == size) && (sum1 == sum2) && (flag_temp == 255))
	{
		result = 1;
	}
	return result;
}

int main()
{
	start();
	
	int result  = 0;
	int arr1[7] = {2,0,1,2,1,1,0}; //{2,0,1,2,1,1,0};
	int arr2[7] = {1,1,0,1,1,1,2}; //{1,1,0,1,1,1,2};
	int size    = sizeof(arr1)/sizeof(*arr1);
	result = compare_TwoArraysHaveSameElements(arr1,arr2,size);
	if(result == 1)
	{
		printf("Same elements\n");
	}
	else
	{
		printf("Not Same elements\n");
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