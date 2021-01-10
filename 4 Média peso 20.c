#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
float p,s=0,m=0;
int x;
for (x=1;x<=20;x++){
	printf("\ndigite o peso da pessoa\n");
    scanf("%f",&p);
    s=s+p;
}
m=s/20;
printf("\nmédia de peso das pessoas = %0.2f\n",m);

}
