#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    printf("Introduce un numero:\n");
    scanf("%d", &numero);

    FILE *f;
    f = fopen("TABLA.TXT", "w");
    for (int i = 0; i <= 10; i++)
    {
        fprintf(f, "%d\n", i * numero);
    }
    fclose(f);

    return 0;
}