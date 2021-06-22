#include<stdio.h>
                        
int main()
{
    enum Days{Mon = 1, Tue, Wed, Thur, Fri, Sat, Sun};
       
    enum Days value;
    
    printf("%d\n", Mon);
    printf("%d\n", Tue);
    printf("%d \n",Sun);
    // Mon++;
    
    value = Mon;
    
    printf("%d\n",value);
    value++;
    
    printf("%d\n",value);
    
    printf("%d\n",sizeof(value));
    
    return 0;
}