//create a 2D aarray storing the tables of 2 & 3

#include<stdio.h>
void storeTable(int arr[][10], int n,int m,int number);
int main()
{
    int  tables[2][10];
    storeTable( tables, 0, 10, 2);
    storeTable( tables, 1, 10, 3);

    for(int i=0;i<10;i++){
        printf("%d ", tables[0][i]);
        
    }
    for(int i=0;i<10;i++){
        printf("%d ", tables[1][i]);
    }

        
    return 0;
    printf("\n");

}

void storeTable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][i]= number *(i+1);
    }
}