#include<stdio.h>
 int main()
{
int Arr[5]={10,20,30,40,50};
printf("%lu\n",Arr);
printf("%lu\n",&Arr);
printf("%lu\n",&(Arr[0]));
printf("%lu\n",sizeof(Arr));
printf("%lu\n",Arr+1);
printf("%lu\n",&Arr+1);
printf("%lu\n",Arr+2);
printf("%lu\n",&Arr+2);

p=Arr;
q=&Arr;

printf("%lu\n",p+1);
printf("%lu\n",q+1);
return 0;
}