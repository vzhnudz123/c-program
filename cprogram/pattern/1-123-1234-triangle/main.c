/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n=9;
	int num=1;
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			printf(" ");
		}
		for(int k=1;k<=i;k++){
		    printf("%d",k);
		    num++;
		}
		for(int l=i-1;l>=1;l--){
		    printf("%d",l);
		}
		
		printf("\n");
	}

	return 0;
}