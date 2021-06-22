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
 auto int no1=11;
register int no2=21;
 printf("%d\n",no1);
 printf("%d\n",no2);
printf("inside Fun\n");
} 