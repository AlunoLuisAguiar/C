#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct dados_funcionario{
	char nome[40],cpf[11],estado_civil[15],cel[15],endereco[50],cargo[20];
	float salario;	
};
main(){
	setlocale(LC_ALL,"portuguese");
	struct dados_funcionario funcionario[50];
	int c,sinal=0,op=0;
	char nome_pesquisa[40];
	while (op!=3){
	printf("\n------------------------------------------\n");
	printf("\n1 - Inserir Funcion�rio\n");
	printf("\n2 - Pesquisar Funcion�rio\n");
	printf("\n3 - Sair\n");
	printf("\n------------------------------------------\n");
	scanf("%d",&op);
	sinal=0;
	if (op==1){
	  for (c=0;c<=2;c++){//entrada de dados 
	    printf("\n-----CADASTRO DE FUNCION�RIOS-----\n");
	    printf("\nInforme o nome do funcion�rio\n");
	    scanf("%s",funcionario[c].nome);
	    fflush(stdin);//fun��o da biblioteca string.h
	    printf("\nInforme o cpf do funcion�rio\n");
        scanf("%s",funcionario[c].cpf);
	    fflush(stdin);
	    printf("\nInforme o estado civil - solteiro, casado, separado ou vi�vo\n");
	    scanf("%s",funcionario[c].estado_civil);
	    fflush(stdin);
	    printf("\nInforme o celular do funcion�rio\n");
        scanf("%s",funcionario[c].cel);
	    fflush(stdin);
	    printf("\nInforme o endere�o do funcion�rio\n");
        scanf("%s",funcionario[c].endereco);
	    fflush(stdin);
	    printf("\nInforme o cargo do funcion�rio - gerente, supervisor ou auxiliar\n");
        scanf("%s",funcionario[c].cargo);
	    fflush(stdin);
    	printf("\nInforme o sal�rio do funcion�rio\n");
        scanf("%f",&funcionario[c].salario);
        printf("\n---------------------------------------------------------------\n");
		}
      }
      else if (op==2){
       printf("\n-----PESQUISA DE FUNCION�RIOS-----\n");
	   printf("\nDigite o nome do funcion�rio\n");
	   scanf("%s",nome_pesquisa);
       printf("\n");
	   printf("\nPesquisando...\n");
	   printf("\n------------------------------------------\n");
	   for (c=0;c<=2;c++){
	    printf("\n------------------------------------------\n");
	    if (strcmp(funcionario[c].nome,nome_pesquisa)==0){
	       printf("\nNome = %s",funcionario[c].nome);
	       printf("\nCPF = %s",funcionario[c].cpf);
	       printf("\nEstado Civil= %s",funcionario[c].estado_civil);
	       printf("\nCelular = %s",funcionario[c].cel);
	       printf("\nEndere�o = %s",funcionario[c].endereco);
	       printf("\nCargo = %s",funcionario[c].cargo);
	       printf("\nSal�rio = %0.2f",funcionario[c].salario);
	       printf("\n------------------------------------------\n");
	       sinal=1;c=3;}
   }
   if (sinal==0) printf("\nFuncion�rio n�o encontrado\n");
}
}
}

