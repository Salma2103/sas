#include <stdio.h>


 float moyenne(float tab[100],int taille){
    float  somme=0,result=0;
     for (int i=0;i<taille;i++){
    somme=somme+tab[i]/taille;


 }
 return somme;
 }


 void  afficher(float tab[100],int taille,float n){
     n=moyenne(tab,taille);
    printf ("les note superieur a la moyenne sont:\n ");
      for (int i=0;i<taille;i++){
  if (tab[i]>n){
      printf("%f  ",tab[i]);
  }

 }


}

  void mix_min(float tab[100],int taille){
float max=tab[0],min=tab[0];

  for (int i=1;i<taille;i++){
    if(max<tab[i])
    {
       max=tab[i];
    }
    if(min>tab[i]){
        min=tab[i];
    }
   }

 printf("min est :%f \n",min);
 printf("max est :%f \n",max);


}
void valider(float tab[100],int taille){

int count=0;
  for(int i=0;i<taille;i++){
        if(tab[i]>=12){
            count++;
        }

  }
    printf ("nombre des etudiant ayant valider :%d \n",count);

}


void rattrapage(float tab[100],int taille){

int count=0;
  for(int i=0;i<taille;i++){
        if(tab[i]<12){
            count++;
        }

  }
    printf ("nombre des etudiant en rattrapage :%d \n",count);

}


int main() {
float t[100];
int option,size;

float moyene,x;

 printf("saisir le nombre des etudiants:");
 scanf("%d",&size);

  for(int i=0;i<size;i++){
      printf("saisir la note de l'etudiant  %d :",i+1);
      scanf("%f",&t[i]);
  }

  do {

    printf("saisir votre option  :");
    scanf("%d",&option);

    switch(option){
    case 1 :  printf("%.2f   \n",moyenne(t,size));
    break;

    case 2 :  mix_min(t,size);
    break;
     case 3 :
    x=moyenne(t,size) ;
    afficher(t,size,x);
    break;
      case 4 :
    valider(t,size);
    break;
      case 5 :
    rattrapage(t,size);
    break;
      case 6 :printf("au revoir !");

    }

    }
while(option!=7);



    return 0;
}
