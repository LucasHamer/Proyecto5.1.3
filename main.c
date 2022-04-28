#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,sumapares=0,contpares=0; // Todo contador y acumulador debe inicializarse.

    for(i=0;i<50;i++)
    {
        printf("Ingrese 50 numeros enteros: ");
        scanf("%d",&num);
        fflush(stdin);

        if(num%2 == 0)
        {
            sumapares=sumapares+num;
            contpares++;
        }
    }
    if(contpares>0)
    {
        printf("El promedio de los pares es de: %.2f", (float)sumapares/contpares);
    }
    else
    {
        printf("No se ingresaron numeros pares");
    }
    return 0;
}
