#include<stdio.h>
#include<math.h>
int main()
{
    int marks[4];
    printf("enter phy: ");
    scanf(" %d ", &marks[0]);


    printf("enter chem: ");
    scanf(" %d ", &marks[1]);


    printf("enter math: ");
    scanf(" %d ", &marks[2]);

    printf("enter marathi: ");
    scanf(" %d ", &marks[3]);

    printf("phy= %d,chem= %d,math= %d , marathi= %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;


}