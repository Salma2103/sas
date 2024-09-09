 #include <stdio.h>

int main() {
   

double distance_Km;
 
 printf("saisir la distance en kilomètres  :");
 scanf("%lf",&distance_Km); 
    double distance_Yards = distance_Km * 1093.61;

   printf("la distance en Yards :%.2lf  \n",distance_Yards);
 

    return 0;
}
