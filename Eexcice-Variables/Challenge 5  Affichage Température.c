 #include <stdio.h>

int main() {
   

float C;
 
 printf("la temp�rature en Celsius :");
 scanf("%f",&C); 
 
if(C < 0){
     printf("l'�tat de l'eau � cette temp�rature Solide   \n" );

}
else if (0 <= C && C < 100){
 printf("l'�tat de l'eau � cette temp�rature est  Liquide   \n");
 
  
}
else{
    
       printf("l'�tat de l'eau � cette temp�rature Gaz  \n" );
}
 
 
    return 0;
}
