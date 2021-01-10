#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"portuguese");
int n,s=0;
printf("\ndigite um número positivo para começar\n");
scanf("%d",&n);
while (n!=0)
	{
	s=s+n;//somatório dos números positivos
	printf("\ndigite um número positivo ou zero para sair\n");
	scanf("%d",&n);
	}
	printf("\n somatório dos números positivos = %d",s);
}
