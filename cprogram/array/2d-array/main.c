/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matrix [4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
printf("%d",matrix[i][j]);
}
printf("\n");
}

    return 0;
}