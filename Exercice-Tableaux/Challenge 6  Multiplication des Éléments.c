 #include <stdio.h>

int main() {
   
 int t[100]={ },size,facteur;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
  
  printf("saisir le facteur:");
  scanf("%d",&facteur);
  
   for(int i=0;i<size;i++){
    t[i]*=facteur;
      
  }
  
    for(int i=0;i<size;i++){
     printf(" %d",t[i]);
      
  }
  
 
  
  
  
    return 0;
}
