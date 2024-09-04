 #include <stdio.h>

int main() {
   
 int t[100]={ },size;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
  int min=t[0];
   for(int i=1;i<size;i++){
 if(min>t[i]){
     min=t[i];
 }
      
  }
  
  printf("le minimum est :%d",min);
 
  
  
  
    return 0;
}
