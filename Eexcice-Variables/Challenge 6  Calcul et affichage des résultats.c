 #include <stdio.h>

int main() {
   

float a,b;
 
 printf("saisir 1er  nombre :\n ");
 scanf("%f",&a); 
  printf("saisir 2eme  nombre :\n ");

  scanf("%f",&b); 

float somme =a+b;
 float produit=a*b;
 float difference=a-b;
 float division=a/b;
 printf("la somme est :%.2f \n le produit est :%.2f \n la difference est :%.2f \nla division est :%.2f \n",somme,produit,difference,division);
 
    return 0;
}
