#include<stdio.h>
 int no1=10;
int no2;
//variable declaration
extern int value;
//function declaration which is outside the file
extern void fun();
//fun is a function which accepts nothing and which returns nothing. this function is define externally.
int main()
{
printf("inside main\n");
printf("%d\n",no1);
printf("%d\n",no2);
printf("%d\n",value);
fun();
return 0;
}
