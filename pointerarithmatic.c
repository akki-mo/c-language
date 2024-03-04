/*#include<stdio.h>
int main()
{
    float price =100.00;
    float *ptr= &price;
    printf("ptr = %u\n", ptr);
    ptr++;  //forword 4 bytes 
    printf("ptr = %u\n", ptr);
    ptr--;  // back to original position
    printf("ptr = %u\n", ptr);
    return 0;
}*/

#include<stdio.h>
int main()
{
    char star ='*';
    char *ptr= &star;
    printf("ptr = %u\n", ptr);
    ptr++;  //forword 4 bytes 
    printf("ptr = %u\n", ptr);
    ptr--;  // back to original position
    printf("ptr = %u\n", ptr);
    return 0;
}