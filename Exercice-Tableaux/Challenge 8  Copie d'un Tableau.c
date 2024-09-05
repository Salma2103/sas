 #include <stdio.h>

int main() {

 int t[50],t2[50],size;

 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }

   for(int i=0;i<size;i++){
        t2[i]=t[i];
   printf(" tableau original %d \n",t[i]);

   }


  for(int i=0;i<size;i++){
    printf("  tableau copi�  %d \n",t2[i]);

   }



    return 0;
}
