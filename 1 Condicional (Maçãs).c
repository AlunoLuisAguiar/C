#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	int qt;
	float t=0;
    printf("\nDigite a quantidade de maçãs compradas\n");
    scanf("%d",&qt);
    if (qt<=12) {t=qt*1.0;
	             printf ("Total: %0.2f",t);}
        else {t=qt*1.30;
		 printf("Total: %0.2f",t);}
}
