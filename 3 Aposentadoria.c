#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"portuguese");
int n,an,ai,aa,i,t;
printf("\nInforme o número do empregado\n");
scanf("%d",&n);
printf("\nInforme o ano atual do calendário\n");
scanf("%d",&aa);
printf("\nInforme o ano de nascimento do empregado\n");
scanf("%d",&an);
printf("\nInforme o ano de ingresso na empresa\n");
scanf("%d",&ai);
i=aa-an;
t=aa-ai;
if (i>=65) printf("\nRequerer aposentadoria\n");
  else if (t>=30) printf("\nRequerer aposentadoria\n");
    else if ((i>=60)&&(t>=25)) printf("\nRequerer aposentadoria\n");
       else printf("\nNão requerer aposentadoria\n");
}
