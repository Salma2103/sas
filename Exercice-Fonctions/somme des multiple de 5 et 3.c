 #include <stdio.h>




int main(){
int t[10],size,somme=0;


 printf("Remplissage *********\n");

for (int i=0;i<10;i++){
 printf("saisir l 'element %d: ",i+1);
scanf("%d",&t[i]);

}

for(int i=0;i<10;i++){

    if((t[i]%5)==0 || (t[i]%3)==0){
        somme=somme+t[i];

    }

}

        printf("la somme est:%d",somme);









    return 0;
}





