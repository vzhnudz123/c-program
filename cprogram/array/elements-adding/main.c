/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int size1;
    int size2;
    printf("enter two array size");
    scanf("%d%d",&size1,&size2);
    int arr[size1][size2];
    printf("enter the elements");
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
    scanf("%d",&arr[i][j]);
    }}
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}