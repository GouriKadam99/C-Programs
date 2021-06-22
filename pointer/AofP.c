#include<stdio.h>
  int main()
{

double no1=10.1,no2=20.1,no3=30.1,no4=40.1;
double *Arr[4]={&no1,&no2,&no3,&no4};

printf("%lu\n",Arr);
printf("%lu\n",Arr[0]);
printf("%lf\n",no1);
printf("%dlu\n",&no3);
printf("%d\n",sizeof(Arr));
printf("%d\n",sizeof(no2));
printf("%lu\n",&(Arr[3]));
printf("%lf\n",*(Arr[3]));

return 0;
}