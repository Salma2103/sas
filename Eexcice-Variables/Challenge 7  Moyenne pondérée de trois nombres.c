#include <stdio.h>

int main() {
     float nbr1, nbr2, nbr3;
    float pondération1  = 2,
    pondération2 = 3, 
    pondération3  = 5,
    moyenne_pondere;
 
     printf("Entrez le 1er nombre: ");
    scanf("%f", &nbr1);

    printf("Entrez le 2 eme nombre: ");
    scanf("%f", &nbr2);

    printf("Entrez le 3eme nombre: ");
    scanf("%f", &nbr3);

     moyenne_pondere = (nbr1 *pondération1  + nbr2 * pondération2 + nbr3 * pondération3) / (pondération1 + pondération2 + pondération3);

     printf("La moyenne pondérée est : %.2f\n", moyenne_pondere);

    return 0;
}
