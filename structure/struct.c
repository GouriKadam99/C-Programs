#include<stdio.h>

int main()
{
    // Structre Declaration
    struct Demo
    {
        int no;
        float f;
        double d;
    };//obj1 = {11,10.5,20.5};  // Object Creation & initialisation
    
    // Object Creation
    struct Demo obj1;
    struct Demo obj2;
    
    // Object initialisation
    obj1.no = 11;
    obj1.f = 10.5;
    obj1.d = 20.5;
    
    obj2.no = 21;
    obj2.f = 50.5;
    obj2.d = 100.5;
    
    // Structure member accessing
    printf("Size of the object obj1 is : %d\n",sizeof(obj1));
    printf("Contents of obj1\n");
    printf("obj1.no is : %d\n",obj1.no);
    printf("obj1.f is : %f\n",obj1.f);
    printf("obj1.d is : %f\n",obj1.d);
    
    return 0;
}