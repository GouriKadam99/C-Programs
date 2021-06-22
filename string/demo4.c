#include<stdio.h>
#include<string.h>


void Display(char arr[])
{
	int i = 0;
	while(arr[i]!='\0')
	{
		printf("%c\n",arr[i]);
		i++;
	}
}
int main()
{
	// ways in which we can create the string
	char str1[15] = "Hello";
	Display(str1);
	
	return 0;
}