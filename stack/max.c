#include<stdio.h>
  int Maximum(int,int);
  int main()
   {
       int no1=0,no2=0,ret=0;

       printf("enter first number\n");
       scanf("%d",&no1);
        printf("enter second number\n");
       scanf("%d",&no2);
   
     ret=Maximum(no1,no2);//maximum(11,21)
     printf("maximum number is:%d",ret);
     return 0;
  }
    int Maximum(int value1,int value2)
    {
     if(value1>value2)
      {
          return value1;
          }
       else
        {
          return value2;
          }
   }
       
   
