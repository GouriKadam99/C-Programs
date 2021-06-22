#include<stdio.h>
  
int main()
{
int Arr[5]={10,20,30,40,50};
int *ptr1=NULL;
ptr1=&(Arr[3]);
printf("%lu\n",ptr1-2);
printf("%lu\n",ptr1);
return 0;
}