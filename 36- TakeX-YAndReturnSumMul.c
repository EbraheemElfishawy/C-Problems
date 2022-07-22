//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
int sum = 0;
int mul = 0;
int* SumAndMul_method1 (int x, int y)
{
	static int arr[2] = {0};
	arr[0] = x+y;
	arr[1] = x*y;
	return arr;
}
void SumAndMul_method2 (int x, int y)
{
	sum = x+y;
	mul = x*y;
}
void SumAndMul_method3 (int *x, int *y)
{
	int temp = (*x) * (*y);
	*x 		 = (*x) + (*y);
	*y       = temp;
}

int main()
{
	start();
	
	int a = 2;
	int b = 3;
	int *result_arr = SumAndMul_method1(a,b);
	printf("Method1: \nSum of %d and %d = %d\nMul of %d and %d = %d\n",a,b,result_arr[0],a,b,result_arr[1]);
	SumAndMul_method2(a,b);
	printf("Method2: \nSum = %d\nMul = %d\n",sum,mul);
	SumAndMul_method3(&a,&b);
	printf("Method3: \nSum = %d\nMul = %d\n",a,b);
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