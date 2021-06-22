#include<stdio.h>

int main()
{
    // Structure declaration
    struct Demo
    {
        int no;
        float f;
        double d;
    };
    
    // Object Creation
    struct Demo obj;
    
    // p is apointer which points to the
    // structre demo.
    struct Demo * p = NULL;
    
    // p pointer holds address of object obj
    p = &obj;
    
    // Member initialisation using indirect access operator ( -> )
    p -> no = 11;
    p -> f = 10.5;
    p -> d = 20.5;
    
    printf("Value of no is : %d\n" ,p->no); // 11
    printf("Value of f is : %f\n" ,p->f);   // 10.5
    printf("Value of d is : %f\n" ,p->d);   // 20.5
    printf("%lu\n",p);  // 100
    printf("%lu\n",&obj);   // 100
    printf("%lu\n",&p);   // 200
    printf("%lu\n",&obj.d);   // 108
    
    return 0;
}