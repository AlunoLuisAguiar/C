#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	int qt,i,r=1;
	float m=0,s=0;
	while (r!=0){
		printf("\nInforme a idade da pessoa\n");
        scanf("%d",&i);
        s=s+i;
        qt++;
	    printf("\nDigite 1 para continuar ou 0 para sair\n");
        scanf("%d",&r);
	}
	m=s/qt;
    printf("Quantidade de pessoas: %d",qt);
    printf("\nMédia de idade: %0.2f\n",m);
}
