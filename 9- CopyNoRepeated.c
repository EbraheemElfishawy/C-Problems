#include<stdio.h>

void CopyNoRepeat (char *str, char *str2)
{
	char count[256] = {0};
	int j = 0;
	for(int i = 0; str[i]; i++) // or for(int i = 0; str[i]!= '\0'; i++)
	{
		if(count[str[i]] == 0)
		{
			str2[j] = str[i];
			j++;
			count[str[i]] = 1;
		}
	}
	//str2[j] = '\0';
}

int main()
{
	char str[]= "Ebraheem";
	char str2[10];
	//CopyNoRepeat(str,str2);
	
	  int i = 1, j = 0, count = 1;
int arrNew[10] = { 0 }; 
arrNew[0] = str[0]; 
while(i<8){
    if (str[i] == arrNew[j]) { // if the element of str is already added, resets j for next iteration and moves to the next element.
        j = 0;
        i++;
    }
    else {
        if (j == count - 1) { // checks if we reached the end of arrNew and adds missing element.
            arrNew[count] = str[i];
            j = 0;
            count++; // this variable makes sure we check only the assigned elements of arrNew.
            i++;
        }
        else // if j < count -1 we didnt finish checking all of arrNew.
            j++;
    }
}
printf("%s",str2);
	return 0;
}