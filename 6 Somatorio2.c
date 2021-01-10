#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"portuguese");
int n,s=0;
do
	{
		printf("\nDigite um número positivo ou zero para sair\n");
		scanf("%d",&n);
		s=s+n;
	}while (n!=0);
	printf("\nsomatorio de números positivos = %d",s);
}
