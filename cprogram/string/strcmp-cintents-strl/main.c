/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    
    char str1[50]={"dilu"};
    char str2[50]={"dilu"};
    char str3[50];
    printf("length of str1 %zu",strlen(str1));//length proprty zu
    //strcpy for copying hello to str3
    strcpy(str3,str1);
    printf("\n");
    printf("str3 is now=%s",str3);
    strcat(str1,str2);
    printf("\n");
    printf("%s",str1);
    
    int result=strcmp(str1,str2);//compare
    printf("\n");
    if(result>0){
        printf("same");
    }
    else{
        printf("not same");
    }
    
    

    return 0;
}
