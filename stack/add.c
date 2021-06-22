#include<stdio.h>
  int Add(int,int);
  int main()
   {
       int x=0,y=0,ret=0;

       printf("Inside main\n");
      x=10;
      y=20;
     ret=Add(x,y);
     printf("Addition is:%d",ret);
     return 0;
  }
    int Add(int no1,int no2)
    {
       int result=0;
       result=no1+no2;
       return result;
      }
   
       
   
