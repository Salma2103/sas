#include <stdio.h>

int main() {
     float nbr1, nbr2, nbr3;
    float pond�ration1  = 2,
    pond�ration2 = 3, 
    pond�ration3  = 5,
    moyenne_pondere;
 
     printf("Entrez le 1er nombre: ");
    scanf("%f", &nbr1);

    printf("Entrez le 2 eme nombre: ");
    scanf("%f", &nbr2);

    printf("Entrez le 3eme nombre: ");
    scanf("%f", &nbr3);

     moyenne_pondere = (nbr1 *pond�ration1  + nbr2 * pond�ration2 + nbr3 * pond�ration3) / (pond�ration1 + pond�ration2 + pond�ration3);

     printf("La moyenne pond�r�e est : %.2f\n", moyenne_pondere);

    return 0;
}
