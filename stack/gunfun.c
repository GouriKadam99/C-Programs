#include<stdio.h>
  void fun();
  void gun();
   int main()
   {
      fun();
       gun();
    return 0;
}
    void fun()
{
     printf("inside fun\n");
   gun();
    }
   void gun()
   {
     printf("inside gun\n");
   }
     

   
