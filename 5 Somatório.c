#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"portuguese");
int n,s=0;
printf("\ndigite um n�mero positivo para come�ar\n");
scanf("%d",&n);
while (n!=0)
	{
	s=s+n;//somat�rio dos n�meros positivos
	printf("\ndigite um n�mero positivo ou zero para sair\n");
	scanf("%d",&n);
	}
	printf("\n somat�rio dos n�meros positivos = %d",s);
}
