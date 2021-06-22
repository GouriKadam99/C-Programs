#include<stdio.h>
                        
int main()
{
    enum Demo{A = 10/3,B = 4*3,C,D = 7-2,E,F = A};
    
    printf("%d\n",A);    // 3
    printf("%d\n",B);   //  12
    printf("%d\n",C);   //  13
    printf("%d\n",D);   //  5
    printf("%d\n",E);   //  6
    printf("%d\n",F);   //  2
       
    return 0;
}