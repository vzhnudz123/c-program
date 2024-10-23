/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
	int n = 8;

	for (int i = 1; i <= n; i++) {
		
		for (int j = i; j<=n; j++) {
			printf(" ");
		}

	
		for (int k = 1; k<=i; k++) {
		    printf("*");
			}
				printf("\n");
	}
	//next line
	for (int i = 1; i <= n; i++) {
	    for (int m = 1; m<=i; m++) {
			printf(" ");
	    }
			
			for (int e = i; e<=n; e++) {
		    printf("*");
			}
	        printf("\n");
	    }
	    

	return 0;
}
