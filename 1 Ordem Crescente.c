#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL,"portuguese");
	int x,y,z;
    printf("\nDigite três valores diferentes entre si\n");
    scanf("%d%d%d",&x,&y,&z);
    if ((x<y)&&(y<z)) printf ("A ordem crescente: %d, %d, %d", x,y,z);
        else if ((x<z)&&(z<y)) printf ("A ordem crescente: %d, %d, %d", x,z,y);
            else if ((y<x)&&(x<z)) printf ("A ordem crescente: %d, %d, %d", y,x,z);
              else if ((y<z)&&(z<x)) printf ("A ordem crescente: %d, %d, %d", y,z,x);
                else if ((z<x)&&(x<y)) printf ("A ordem crescente: %d, %d, %d", z,x,y);
                   else printf("A ordem crescente: %d, %d, %d", z,y,x);
}
