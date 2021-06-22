#include<stdio.h>

 int Addition(int,int);                                                         //forword declaration

 int main()   //entry point function
 {
     int No1=0, No2=0;                                                      //No1 and No2 is local variables.
     int Result=0;

     printf("Enter first number\n");                                     //Accept the values from user
     scanf("%d",&No1);
     printf("Enter second number\n");
     scanf("%d",&No2);

     Result =Addition(No1,No2);                                        //call to the addtion function by passing the value
    printf("Addtion is:%d\n",Result);                                 //display the result

     printf("%lu\n",Addition);
     printf("%lu\n",sizeof(&No1));

    return 0;
  
}

int Addition(int value1,int value2)                                   //function defination
{
    int Ans =0;                                                                     //local variable
    Ans= value1 + value2;                                                 //perform the addtion and store the result ito answer variable
    return Ans;                                                                    //return the result(Addition) to the caller
}