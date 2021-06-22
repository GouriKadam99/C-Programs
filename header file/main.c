 #include "Marvellous.h"

int main()
{
    INTEGER i = 0, j = 0 , ret = 0;
    
    printf("Enter first number\n");
    scanf("%d",&i);
    
    printf("Enter second number\n");
    scanf("%d",&j);
    
    ret = Addition(i,j);
    
    printf("Addition is : %d\n",ret);
    
    return 0;
}