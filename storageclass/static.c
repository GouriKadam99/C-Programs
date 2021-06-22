#include<stdio.h>

extern int value;
void Fun();
void Gun();
int main()
  {
 printf("inside main\n");
 printf("%d\n",value);
        Fun();
        Fun();
        Fun();

        Gun();
        Gun();
        Gun();

       return 0;
   }
       //function defination
 void Fun()
{
int no=10;
no++;
printf("from Fun :%d\n",no);
} 
 void Gun()
{
 static int no=10;
no++;
printf("from Gun :%d\n",no);
} 