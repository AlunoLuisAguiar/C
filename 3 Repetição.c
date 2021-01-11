#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	int n,x,r=0;
    printf("\nQual a tabuada?\n");
    scanf("%d",&n);
    for (x=1;x<=10;x++){
    	r=x*n;
    	printf("\n%d x %d = %d\n",n,x,r);
	}
}
