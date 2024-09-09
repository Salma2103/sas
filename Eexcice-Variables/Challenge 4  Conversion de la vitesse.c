 #include <stdio.h>

int main() {
   

double vitesseKm_h;
 
 printf("saisir la vitesse en kilomètres  par heure :");
 scanf("%lf",&vitesseKm_h); 
    double vitesseMs = vitesseKm_h  * 0.27778;
 
 printf("la vitesse en metre par seconde :%.2lf  \n",vitesseMs);
 

    return 0;
}
