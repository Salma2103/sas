 #include <stdio.h>

int main() {
   
 int t[50],nombre,size;
 double moyenne;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
   printf("saisir  la valeur à remplacer:, %d \n",nombre);
      scanf("%d",&nombre);
      
   for(int i=0;i<size;i++){
        if (t[0]==t[i]) {
            
        }
        else{
            printf("l'element n'est pas present");

        }
    

   }
     

   
     
  
  
    return 0;
}
