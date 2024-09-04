 #include <stdio.h>

int main() {
   
 int t[100],size,a;
 printf("saisir la taille du tableau:");
 scanf("%d",&size);
  for(int i=0;i<size;i++){
      printf("saisir un element %d \n",i+1);
      scanf("%d",&t[i]);
  }
   
  
   for(int i=0;i<size-1;i++){
     for(int j=i+1;j<size;j++){
     if(t[i]>t[j])
     {
         a=t[i];
       t[i]=t[j];
        t[j]=a;
     }      
  }      
  }
  
   
   for(int i=0;i<size;i++){
      printf("  t[%d ]= %d\n", i,t[i]);
    
  }
   
 
  
  
  
    return 0;
}
