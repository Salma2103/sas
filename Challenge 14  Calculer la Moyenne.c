 #include <stdio.h>

int main() {
   
 int t[100],size,somme=0;
 double moyenne;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
   
   for(int i=0;i<size;i++){
        somme+=t[i];
      
   }
    moyenne=somme/size;
       printf("la moyenne est  %.2f \n",moyenne);

  
  
  
    return 0;
}
