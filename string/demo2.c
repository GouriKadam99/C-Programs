#include<stdio.h>
#include<string.h>
int main()
{
	//ways in which we can create the string
	
	char str1[15]="Hello";
	char str2[]="Demo";
	char str3[]="Demo";
	char arr[10];
	int ret=0;
	strcpy(arr,str1);
	printf("Data after copy is :%s\n",arr);		
	strcat(str1,str2);
	printf("Data after concatination is:%s\n",str1);
	printf("Sring length is:%d\n",strlen(str1));
	ret = strcmp(str2,str3);
	if(ret==0)
	{
		printf("both the strings are same\n");
	}
	else
	{
		printf("strings are different");
	}
	return 0;
}