#include<stdio.h>
void dowork(int a ,int b,int *sum,int *product,int *average);
int main()
{
    int a=3,b=5;
    int sum,product,average;
    dowork(a,b,&sum,&product,&average);


    printf(" sum =%d,product =%d, average %d\n", sum,product,average);
    return 0;
}
void dowork(int a,int b,int *sum,int *product,int *average)
{
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2; 

}