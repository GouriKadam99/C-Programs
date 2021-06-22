#include<stdio.h>

void Fun();

//entry point function 
int main()
  {
       printf("inside main\n");
 
      Fun();  //function call
       return 0;
   }
       //function defination
 void Fun()
{
int no1=11;
auto int no2=21;
int no3;
 printf("%d\n",no1);
 printf("%d\n",no2);
printf("%d\n",no3);
printf("inside Fun\n");
} 