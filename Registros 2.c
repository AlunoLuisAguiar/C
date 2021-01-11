#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct dados_agenda{
	char nome[40],cel[15];
};
main(){
	setlocale(LC_ALL,"portuguese");
	struct dados_agenda agenda[50];
	int c,sinal=0,op=0;
	char nome_pesquisa[40];
	while (op!=3){
	printf("\n------------------------------------------\n");
	printf("\n1 - Inserir Contato\n");
	printf("\n2 - Pesquisar Contato\n");
	printf("\n3 - Sair\n");
	printf("\n------------------------------------------\n");
	scanf("%d",&op);
	sinal=0;
	if (op==1){
	  for (c=0;c<=2;c++){//entrada de dados 
	    printf("\n-----CADASTRO DE CONTATOS-----\n");
	    printf("\nNome?\n");
	    scanf("%s",agenda[c].nome);
	    fflush(stdin);//função da biblioteca string.h
	    printf("\nCelular\n");
        scanf("%s",agenda[c].cel);
	    fflush(stdin);
        printf("\n---------------------------------------------------------------\n");
		}
      }
      else if (op==2){
       printf("\n-----PESQUISA DE CONTATOS-----\n");
	   printf("\nNome do Contato?\n");
	   scanf("%s",nome_pesquisa);
       printf("\n");
	   printf("\nPesquisando...\n");
	   printf("\n------------------------------------------\n");
	   for (c=0;c<=2;c++){
	    printf("\n------------------------------------------\n");
	    if (strcmp(agenda[c].nome,nome_pesquisa)==0){
	       printf("\nNome = %s",agenda[c].nome);
	       printf("\nCelular = %s",agenda[c].cel);
	       printf("\n------------------------------------------\n");
	       sinal=1;c=3;}
   }
   if (sinal==0) printf("\nContato não encontrado\n");
}
}
}

