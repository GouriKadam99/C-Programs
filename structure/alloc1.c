#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// void *malloc(Number of bytes);
// void *calloc(Number of elements, sizeof each element);
// void free(address);

int main()
{
    // Static memory allocation
    int Arr[5]; // 20 bytes of memory
    
    // Dynamic memory allocation
    int *ptr = NULL;
    int size = 0;
    
    printf("Enter number of elelemnts that you want to allocate\n");
    scanf("%d",&size);
    
    ptr = (int*)malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Dynamic memory gets allocated in Heap at the address %lu\n",ptr);
    
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    
    printf("Elements are : %d %d %d\n",ptr[0],ptr[1],ptr[2]);
    
    printf("Free the allocated memory\n");
    
    free(ptr);
    
    return 0;
}