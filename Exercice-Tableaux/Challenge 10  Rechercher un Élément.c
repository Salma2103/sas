 #include <stdio.h>

int main() {
   
 int t[50],nombre,size;
 int found;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
   printf("saisir un élément à rechercher: ");
      scanf("%d",&nombre);
   for(int i=0;i<size;i++){
        if (t[i]==nombre) {
           found=1;
           break;
        }

   }
     
if(found==1){
    printf("l'element est present");
}
else{
       printf("l'element n'est pas  present");
 
}
   
     
  
  
    return 0;
}
