#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	int x,y,z;
    printf("\nDigite tr�s valores diferentes entre si\n");
    scanf("%d%d%d",&x,&y,&z);
    if ((x>y)&&(x>z)) printf ("Maior n�mero: %d",x);
        else if ((y>x)&&(y>z)) printf ("Maior n�mero: %d",y);
            else if ((z>x)&&(z>y)) printf("Maior n�mero: %d",z);
}
