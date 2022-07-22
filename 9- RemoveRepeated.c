//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

int flag_arr[255] = {0};
int temp_index = 0;
int j = 0;
void Copy_ArrayWithoutRepeated(int *arr1, int *arr2, int size)
{
	int i = 0;
	
	for(i = 0; i< 255; i++)
	{	temp_index = arr1[i];
		if (flag_arr[temp_index] == 0)
		{
			flag_arr[temp_index]++;
		}
		else
		{
			if (flag_arr[temp_index] == 1)
			{	
				arr2[i] = arr1[i];
				flag_arr[temp_index]++;
			}
		}
		
		
	}

}
int main()
{
	start();
	int arr[8] = {1,2,3,4,5,6,7,8};
	int arr_copy[8] = {0};
	int size = sizeof(arr) / sizeof(*arr);
	
	Copy_ArrayWithoutRepeated(arr,arr_copy,size);
	for(int i = 0; i < 8; i++)
	{
		printf("arr2[%d] = %d\n", arr_copy[i]);
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