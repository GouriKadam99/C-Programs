#include<stdio.h>
#include<string.h>
int main()
{
	//ways in which we can create the string
char str1[15]="Hello";

char str2[]="Demo";

char arr[10];

strcpy(arr,str1);
printf("Data after copy is :%s\n",arr);		
strcat(str1,str2);
printf("Data after concatination is:%s\n",str1);		
return 0;
}