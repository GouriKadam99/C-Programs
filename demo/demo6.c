#include<stdio.h>
 int main()
 {
double Arr[3][6];
/*Arr is 2 dimensional array
   which contains 4 one dimensional array, 
   each one dimensional array contains 5 elements , 
   and each element is of type integer */
printf("%lu\n",sizeof(Arr));//3*6*8
printf("%lu\n",sizeof(Arr[2]));//6*8
printf("%lu\n",sizeof(Arr[2][2]));//1*8
  return 0;
}
