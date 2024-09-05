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
   printf("saisir un élément à rechercher, %d \n",nombre);
      scanf("%d",&nombre);
   for(int i=0;i<size;i++){
        if (t[i]==nombre) {
            printf("l'element est present");
        }
        else{
            printf("l'element n'est pas present");

        }
    

   }
     

   
     
  
  
    return 0;
}
