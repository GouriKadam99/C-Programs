#include<stdio.h>
  int main()
{
int Arr[5]={10,20,30,40,50};
int *p=Arr;

printf("%d\n",Arr);
printf("%d\n",Arr[0]);
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",&p);
printf("%d\n",sizeof(Arr));
printf("%d\n",sizeof(p));

return 0;
}