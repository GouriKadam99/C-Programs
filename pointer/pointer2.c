#include<stdio.h>
  
int main()
{
int Arr[5]={10,20,30,40,50};
int *ptr1=NULL;
int *ptr2=NULL;
ptr1=Arr;
ptr2=&(Arr[2]);
//printf("%lu\n",ptr1+ptr2);error
printf("%d\n",(*ptr1)+(*ptr2));
return 0;
}