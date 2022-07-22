//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef int            u32;
typedef unsigned char  u8 ;
void convert_LittleEndianToBig( u32 *n)
{
	u8 *ptr  = NULL;
	ptr      = (u8 *)n;
	u32 temp = 0;
	
	temp   = ptr[0];
	ptr[0] = ptr[3];
	ptr[3] = temp;
	
	temp   = ptr[1];
	ptr[1] = ptr[2];
	ptr[2] = temp;
	printf(" ptr[0] = %p\n", ptr[2]);

}
int main()
{
	start();
	u32 number = 0x11223344;//0x44332211
	printf("The number before conversion is %p\n",number);
	convert_LittleEndianToBig(&number);
	printf("The number after conversion is %p\n",number);

	
	
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