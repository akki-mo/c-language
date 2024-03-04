#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
    printf("ptr = %u\n", ptr);
    ptr++;  //forword 4 bytes 
    printf("ptr = %u\n", ptr);
    ptr--;  // back to original position
    printf("ptr = %u\n", ptr);
    return 0;
}