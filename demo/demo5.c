#include<stdio.h>
 int main()
 {
int Arr[5]={11,21,51,101,111};
  printf("size of whole array is: %lu\n",sizeof(Arr));
  printf("size of single element of array is: %lu\n",sizeof(Arr[0]));
  printf("base address of array is: %lu\n",Arr);
  return 0;
}
