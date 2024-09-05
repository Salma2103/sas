 #include <stdio.h>

int main() {
   
 int t[100],size;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
   
   for(int i=0;i<size;i++){
       if(t[i]%2==0)
     {      
         printf("  %d est un nombre pair\n", t[i]);
    
     }
   }
   

  
    return 0;
}
