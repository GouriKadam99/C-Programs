#include<stdio.h>
int main()
 {
  char ch='M';

int i=11;
float f=10.2;
double d=20.5;
//specific pointer
char *cp=&ch;
int *ip=&i;
float *fp=&f;
double *dp=&d;
//generic pointer
void *p=NULL;

printf("%c\n",*cp);
printf("%d\n",*ip);
printf("%f\n",*fp);
printf("%f\n",*dp);

p=&ch;
//printf("%c\n",*p);  //error
printf("%c\n",*(char*)p);  //type casting

p=&i;
printf("%d\n",*(int *)p);

printf("%lu\n",p);
printf("%d\n",(int*)p+1);
return 0;
}