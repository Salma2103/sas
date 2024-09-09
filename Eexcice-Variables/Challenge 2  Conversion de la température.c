 #include <stdio.h>

int main() {
   

float temperature;
 
 printf("saisir la temperature en Celsius  :");
 scanf("%f",&temperature); 
 temperature=  temperature+273.15;
    
   printf("la temperature en Kelvin :%.2f  \n",temperature);
 

    return 0;
}
