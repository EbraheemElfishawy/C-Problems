//Starting
void start(void);
#include<stdio.h>
#include<stdlib.h>
typedef unsigned char u8;
int search_StringInStreamOfData(u8 *stream, u8 *string)
{
	int i    = 0;
	int j    = 0;
	int flag = 0;
	int row = 3;
	int col = 10;
	for( i = 0; i < row ; i++)
	{
		for(j = 0; j < col; j++)
		{	
			
				if(*((stream+i*col)+j) = string[j])
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
			
		}
		if(flag == 1)
		{
			return i;
		}
		
	}
	return 0;
}

int main()
{
	start();
	int result = 0;
	u8 stream[30] = {"Ebraheem Kareem Khaled"};
	u8 string[10]    = "Kareem ";
	result = search_StringInStreamOfData(stream,string);
	printf("index = %d\n",result);
	
	
	
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