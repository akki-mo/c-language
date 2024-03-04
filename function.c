#include<stdio.h>
// decleration/prototype
void printhello();
void printgoodbye();

int main()
{
    printhello();   // function call
    printgoodbye();
    printhello();
    return 0; 
}
// function defination
void printhello()
{
    printf("hello  !\n");
}

void printgoodbye()
{
    printf("goodbye  \n");
}