 #include <stdio.h>

int main() {
   

float C;
 
 printf("la température en Celsius :");
 scanf("%f",&C); 
 
if(C < 0){
     printf("l'état de l'eau à cette température Solide   \n" );

}
else if (0 <= C && C < 100){
 printf("l'état de l'eau à cette température est  Liquide   \n");
 
  
}
else{
    
       printf("l'état de l'eau à cette température Gaz  \n" );
}
 
 
    return 0;
}
