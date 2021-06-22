#include<stdio.h>
  
int main()
{
int Arr[5]={10,20,30,40,50};

int *ptr1=NULL;
ptr1=Arr;
printf("%lu\n",ptr1);
printf("%lu\n",ptr1+3);
printf("%lu\n",ptr1);
printf("%d\n",(*ptr1)+3);

return 0;
}