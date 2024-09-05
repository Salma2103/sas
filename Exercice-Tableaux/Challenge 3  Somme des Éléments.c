 #include <stdio.h>

int main() {
   
 int t[100]={ },size,somme=0;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
      somme=somme+t[i];
  }
  
   
      printf("La somme totale est:%d \n",somme);
     
  
    return 0;
}
