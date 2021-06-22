#include<stdio.h>
  int main()
 {
     int no=11;
     int  *p=&no;
     int  **q=&p;
     int ***x=&q;
     int ****y=&x;
     int *****z=&y;

printf("%d\n",no);
printf("%d\n",&no);
printf("%d\n",y);
printf("%d\n",**x);
printf("%d\n",&x);
printf("%d\n",&z);
printf("%d\n",***z);
printf("%d\n",**q);
printf("%d\n",&p);
printf("%d\n",sizeof(z));
printf("%d\n",&(**q));
printf("%d\n",&(*p));
printf("%d\n",*****z);
printf("%d\n",****y);
      return 0;
}