#include<stdio.h>
  
int main()
{
int Arr[5]={10,20,30,40,50};
int *ptr1=NULL;
int *ptr2=NULL;
ptr1=&(Arr[0]);
ptr2=&(Arr[3]);
printf("%lu\n",ptr1);
ptr1++;
printf("%lu\n",ptr1);
return 0;
}