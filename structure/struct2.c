#include<stdio.h>

int main()
{
    struct Demo
    {
        int no;
        float f;
        double d;
    };
    
    struct Hello
    {
        int i;
        struct Demo obj;
    };
    
    struct Hello hobj;
    
    hobj.obj.no = 11;
    hobj.obj.f = 10.5;
    hobj.obj.d = 20.5;
    hobj.i = 21;
    
    printf("%d\n",hobj.i);
    printf("%d\n",hobj.obj.no);
    
    return 0;
}