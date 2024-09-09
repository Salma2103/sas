 #include <stdio.h>

int main() {
   
 int t[50],size,t2[50],nombre,size2,tab_fus[size+size2];
  printf("saisir la taille du  1 er tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
  
   printf("saisir la taille du 2 eme  tableau:");
 scanf("%d",&size2);
  for(int i=0;i<size2;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t2[i]);
  }
 
 for (int i=0;i<(size+size2)/2;i++){
 
     
      tab_fus[i]=t[i];
      tab_fus[i+size]=t2[i];
    
 }
  
 for (int i=0;i<(size+size2);i++){
      printf("tab_fus[%d]=%d \n",i,tab_fus[i]);
  }
 
    return 0;
}
