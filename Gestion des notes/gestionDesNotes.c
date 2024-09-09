 #include <stdio.h>
 float t[100]={ };
 int size,option;
   float somme=0;
 float moyenne(int t[100]){
     for (int i=0;i<size;i++){
    somme=somme+t[i];
 }
 return somme/size;
 }
float max=0,min=0;
  /*void mix_min(float m){


  for (int i=0;i<size;i++){
    if(m<t[i])
    {
       max=t[i];
    }
    if(m>t[i]){
        min=t[i];
    }
   }

 printf("min est :%f",min);
       printf("max est :%f",max);


}*/
void valider(float t[100]){

int count=0;
  for(int i=0;i<size;i++){
        if(t[i]>=12){
            count++;
        }

  }
    printf ("nombre des etudiant ayant valider :%d \n",count);

}
void rattrapage(float t[100]){

int count=0;
  for(int i=0;i<size;i++){
        if(t[i]<12){
            count++;
        }

  }
    printf ("nombre des etudiant en rattrapage :%d \n",count);

}


int main() {


float moyene;

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
    case 1 :   moyene=moyenne(t);
    printf("la moyenne est :%.2f",moyene);break;

    case 2 :  moyene=moyenne(t);break;

    case 3 :moyenne(t);break;
    case 4 :valider(t);break;
    case 5 :rattrapage(t);break;
    case 6 :printf("au revoir!");break;

    }
    }
while(option!=7);



    return 0;
}
