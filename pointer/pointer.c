#include<stdio.h>
int main()
{
int i=11;
int *ip=&i;
char ch='M';
char *cp=&ch;

printf("value of i is: %d\n",i);
printf("address of i is: %lu\n",&i);
printf("value of ip is: %lu\n",ip);
printf("address of ip is: %lu\n",&ip);
printf("data pointed by ip is: %d\n",*ip);
printf("size of i is: %d\n",sizeof(i));
printf("size of ip is: %d\n",sizeof(ip));

printf("value of ch is: %c\n",ch);
printf("address of ch is: %lu\n",&ch);
printf("value of cp is: %lu\n",cp);
printf("address of cp is: %lu\n",&cp);
printf("data pointed by cp is: %c\n",*cp);
printf("size of ch is: %d\n",sizeof(ch));
printf("size of cp is: %d\n",sizeof(cp));

return 0;
}