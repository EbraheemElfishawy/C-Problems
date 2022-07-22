//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>

void toggle_led (unsigned char *CopyPort, unsigned char CopyPinNumber)
{
	(*CopyPort) ^= (1<<CopyPinNumber);
}
int main()
{
	start();
	
	unsigned char number = 0b00000000;
	unsigned char pin	 = 3;
	printf("number = %d\n", number);
	toggle_led(&number,pin);
	printf("number = %d\n", number);
	toggle_led(&number,pin);
	printf("number = %d\n", number);
	
	
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
