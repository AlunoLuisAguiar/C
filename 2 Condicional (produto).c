#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	char nome[20];
	float p,t=0,tp=0,desc=0,qt;
    printf("\nInforme o nome do produto\n");
    scanf("%s",nome);
    printf("\nInforme a quantidade comprada\n");
    scanf("%f",&qt);
     printf("\nInforme o preço unitário\n");
    scanf("%f",&p);
    if (qt>=5) {t=qt*p;
	             desc=t*0.03;//desconto de 3%
	             tp=t-desc;
	             printf ("\nTotal sem desconto: %0.2f\n",t);
	             printf ("\nDesconto: %0.2f\n",desc);
	             printf ("\nTotal à pagar: %0.2f\n",tp);
				}
        else {t=qt*p;
	            desc=t*0.02;//desconto de 2%
	            tp=t-desc;
	            printf ("\nTotal sem desconto: %0.2f\n",t);
	            printf ("\nDesconto: %0.2f\n",desc);
	            printf ("\nTotal à pagar: %0.2f\n",tp);
				}
}
