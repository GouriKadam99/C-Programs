#include<stdio.h>

int main()
{
    struct Demo
    {
        int no;           // 4
        char ch;        // 1
        float f;          // 4
        int d;            // 4
    };
    
    struct Demo obj;
    
    int padding = 0;
    
    
    
    
    
    
    padding = sizeof(obj) - (sizeof(obj.no) + sizeof(obj.ch) + sizeof(obj.f) + sizeof(obj.d));
    
    printf("Size of the structre is : %d\n",sizeof(obj));
    
    printf("PAdding is of : %d bytes\n",padding);
    
    return 0;
}