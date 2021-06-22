#include<stdio.h>
 int main()
 {
char ch ='M';
int no=11;
float f = 3.14;
double d= 4.2562772;
  printf("size of character: %lu\n",sizeof(ch));
  printf("size of integer: %lu\n",sizeof(no));
  printf("size of float: %lu\n",sizeof(f));
  printf("size of double: %lu\n",sizeof(d));
  return 0;
}
