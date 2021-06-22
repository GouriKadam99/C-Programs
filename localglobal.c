#include<stdio.h>
      int x =10;  //global variable

       void fun()
{
   int z=30; //local variable of fun
   printf("%d\n",y);
}

  int main()
 {
    int y=20; //local variable
    printf("%d",y);
     fun();
    return 0;
  }
