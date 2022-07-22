//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

#define TOG_BIT(Var,bit)	(Var^=(1<<bit))
void toggle_SpecificBit(int *num, int bit)
{
	*num ^= (1<<bit);
}

int main()
{
	start();
	
	int num = 0;
	//toggle_SpecificBit(&num,0);
	TOG_BIT(num,1);
	printf("num = %d\n",num);
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