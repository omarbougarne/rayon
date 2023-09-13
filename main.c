#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float circonference;
    printf("Entrer un rayon\n");
    scanf("%f", &r);
    circonference = 2 * 3.14 * r;
    printf("La circonference est: %f\n", circonference);
    return 0;
}
