//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

void print_ArrayWithPointers(char *arr, int size)
{
	int i     = 0;
	char *ptr = arr; 
	for (i = 0; i < size; i++)
	{
		printf("arr[i] = %c\n", *(ptr+i));
	}
}
int main()
{
	start();
	
	
	
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
	
	char arr[] = {'A', 'B', 'C'};
	int size = sizeof(arr) / sizeof(*arr);
	print_ArrayWithPointers(arr,size);
}