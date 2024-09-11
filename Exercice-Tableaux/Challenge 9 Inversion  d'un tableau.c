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

   for(int i=0;i<(size/2);i++){
         int tmp=t[i];
    for(int j=size-1;j<=(size/2);j--){
        printf("befor %d \n",t[i]);

        t[i]=t[j];
        t[j]=tmp;
        printf("after %d \n",t[i]);

    }


   }





    return 0;
}
