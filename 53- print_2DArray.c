//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

void print_2DArray(int *arr, int rows, int cols)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{	
		for(j = 0; j < cols; j++)
		{
			printf("arr[%d][%d] = %d\n",i,j, *((arr+i*cols)+j) );
		}			
	}
}
int main()
{
	start();
	int arr[2][3] ={{1,2,3},{4,5,6}};
	int size      = sizeof(arr)/ sizeof(*arr);
	print_2DArray((int*)arr, 2,3);
	
	
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