 #include <stdio.h>
#include <string.h>
struct Date{

    int jour;
    int mois ;
    int anne ;
};

struct Etudiant{

    int NumeroUnique;
    char Nom[20];
    char Prenom[20];
    struct Date dateNaissance;
    char Departement[20];
    float NoteGenerale;
};
void Menu(){
    printf("******************Menu**************** \n");
    printf("Pour ajouter un étudiant cliquer sur :1  \n");
    printf("Pour modifier ou supprimer un étudiant cliquer sur :2  \n");
    printf("Pour afficher un étudiant cliquer sur :3  \n");
    printf("Pour calculer la moyenne général  cliquer sur :4  \n");
    printf("Pour les statistiques cliquer sur :5  \n");
    printf("Pour Rechercher  un étudiant cliquer sur  :6 \n");
    printf("Pour tri  des étudiants cliquer sur :7  \n");


}
struct Etudiant ListeEtudiant[100];
int i=0;
void Ajouter(){
    int dep;
    ListeEtudiant[i].NumeroUnique=i+1;
    printf("Enter le nom :");
    scanf("%s",&ListeEtudiant[i].Nom);
    printf("Enter le prenom :");
    scanf("%s",&ListeEtudiant[i].Prenom);
    printf("pour le Departement info cliquer sur 1 \n ");
    printf("pour le Departement management cliquer sur 2\n ");
    printf("pour le Departement construction cliquer sur 3 \n");
    scanf("%d",&dep);
    switch(dep){
    case 1: strcpy(ListeEtudiant[i].Departement,"info");break;
    case 2: strcpy(ListeEtudiant[i].Departement,"management");break;
    case 3: strcpy(ListeEtudiant[i].Departement,"construction");break;

    }

    printf("Enter la Note Générale :");
    scanf("%f",&ListeEtudiant[i].NoteGenerale);
    printf("Enter la date naissance ****\n");
     printf("Enter jour :");
    scanf("%d",&ListeEtudiant[i].dateNaissance.jour);
     printf("Enter mois:");
    scanf("%d",&ListeEtudiant[i].dateNaissance.mois);
     printf("Enter l' anne :");
    scanf("%d",&ListeEtudiant[i].dateNaissance.anne);

    i++;
    printf("Etudiant ajouter avec succe!\n");

     printf("\n\n");
};

void Afficher(){
 if(i==0){
    printf("il n'y a aucun étudiant.\n\n");

 }else{
    for( int  j=0;j<i;j++){

        printf("\n ***Etudiant  :%d ***\n",j+1);
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NumeroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n ",ListeEtudiant[j].NoteGenerale);
        printf("Date de naissance :%d / %d /%d \n \n",ListeEtudiant[j].dateNaissance.jour,ListeEtudiant[j].dateNaissance.mois,ListeEtudiant[j].dateNaissance.anne);

    }}
}

void Modifier(int numero){
int dep;
    for(int j=0;j<i;j++){
        if(ListeEtudiant[j].NumeroUnique==numero){

             printf("Enter  le nouveau nom :");
             scanf("%s",&ListeEtudiant[j].Nom);
             printf("Enter le nouveau prenom :");
             scanf("%s",&ListeEtudiant[j].Prenom);
             printf("Enter le  nouveau Departement :");
    printf("pour le Departement info cliquer sur 1 \n");
    printf("pour le Departement management cliquer sur 2 \n");
    printf("pour le Departement construction cliquer sur 3 \n");
    scanf("%d",&dep);
    switch(dep){
    case 1: strcpy(ListeEtudiant[i].Departement,"info");break;
    case 2: strcpy(ListeEtudiant[i].Departement,"management");break;
    case 3: strcpy(ListeEtudiant[i].Departement,"construction");break;

    }
             printf("Enter la nouveau Note Générale :");
             scanf("%f",&ListeEtudiant[j].NoteGenerale);
        }
    }
        printf("les information de l'etudiant est modifer !!\n");


}

void Supprimer(int numero){
    for(int j=0;j<i;j++){
        if(ListeEtudiant[j].NumeroUnique==numero){
             for(int position=j;position<i;position++){
                 ListeEtudiant[position]=ListeEtudiant[position+1];
             }

        }
    }i--;
    printf("etudiant est supprimer/!\n");

}

void supprimerModifier(){
 int operation,numero;
do{
    printf("Pour modifier  un étudiant  cliquer sur :1  \n");
    printf("Pour supprimer  un étudiant  cliquer sur :2  \n");
    printf("Pour quitter   cliquer sur :3  \n");


printf("Saisir le numero  du type operation:");
scanf("%d",&operation);


 switch(operation){

    case 1:printf("Enter  le numero d'etudiant:");
            scanf("%d",&numero);
           Modifier(numero) ;break;
    case 2:printf("Enter  le numero d'etudiant:");
            scanf("%d",&numero);
           Supprimer(numero) ;break;

 }


}while(operation!=3);
}

void rechercherNom(char nom[20]){

    for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Nom,nom)==0){

        printf("\n ***Etudiant est present  ***\n");
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NumeroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGenerale);
        }
    }


}

void rechercherDepartement(char departement[20]){

    for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Departement,departement)==0){

        printf("\n ***Etudiant  de departement :%s ***\n",ListeEtudiant[j].Departement);
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NumeroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGenerale);
        }
    }

}

void rechercher(){
    int operation;
do{
    printf("Pour Rechercher sur un étudiant par departement  cliquer sur :1  \n");
    printf("Pour Rechercher  un étudiant par nom  cliquer sur :2  \n");
    printf("Pour quitter   cliquer sur :3  \n");


printf("Saisir le numero  du type operation:");
scanf("%d",&operation);
char nom[20],depatrement[20];

 switch(operation){

    case 1: printf("Enter  le departement:");
            scanf("%s",&depatrement);
        rechercherDepartement(depatrement) ;break;
    case 2: printf("Enter  le nom d'etudiant:");
            scanf("%s",&nom);
        rechercherNom(nom) ;break;
         case 3: printf("quitter");
            ;break;
 }


}while(operation!=3);

}


void triA_Z(){

     for(int j=0;j<i-1;j++){
     for(int k=j+1;k<i;k++){
     if(strcmp(ListeEtudiant[j].Nom,ListeEtudiant[k].Nom)>0) {
        struct Etudiant a=ListeEtudiant[j];
       ListeEtudiant[j]=ListeEtudiant[k];
        ListeEtudiant[k]=a;
     }      
  }      
  }
        printf("Tri alphabetique des étudiants effectué (A à Z).\n");

  }
  
 void triCroissant(){
    
      for( int  j=0;j<i-1;j++){

        for (int k = 0; k< i-1-j; k++) {

     if ( ListeEtudiant[k].NoteGenerale>ListeEtudiant[k+1].NoteGenerale)  {
      
                 struct Etudiant   tmp=ListeEtudiant[k];
               ListeEtudiant[k]=ListeEtudiant[k+1 ];
              ListeEtudiant[k+1]=tmp;

            }
        }
    }
    printf("Tri ordre des étudiants effectué .\n");
  }
  
void triStatus(){
    
     for( int  j=0;j<i-1;j++){

        for (int k = 0; k< i-1-j; k++) {
            if (ListeEtudiant[k].NoteGenerale < 10 && ListeEtudiant[k + 1].NoteGenerale >= 10) {
        struct Etudiant tmp;
               tmp=ListeEtudiant[k];
               ListeEtudiant[k]=ListeEtudiant[k+1 ];
              ListeEtudiant[k+1]=tmp;

            }
        }
    }
        printf("Tri status des étudiants effectué.\n");

  }
    
 void tri(){
       
       
 int operation,numero;
do{
    printf("Pour trier les étudiant (A-Z)  cliquer sur :1  \n");
    printf("Pour trier  les  étudiant ordre croissant cliquer sur :2  \n");
    printf("Pour trier  les  étudiant par status cliquer sur :3  \n");
    printf("Pour quitter   cliquer sur :4  \n");


printf("Saisir le numero  du type operation:");
scanf("%d",&operation);


 switch(operation){

    case 1:
           triA_Z() ;break;
    case 2:
           triCroissant() ;break;
     case 3:
           triStatus() ;break;
       case 4:   printf("quitte");break; 

 }


}while(operation!=4);
       
   } 

 void MoyenneGeneral(){
     float sommeInfo=0;
     float sommeMangament=0;
     float sommeConctruction=0;
int cont1=0,cont2=0,cont3=0;
    for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Departement,"info")==0){
              sommeInfo=ListeEtudiant[j].NoteGenerale+sommeInfo;
              cont1++;
          }
        if(strcmp(ListeEtudiant[j].Departement,"management")==0){
              sommeMangament=ListeEtudiant[j].NoteGenerale+sommeMangament;
 cont2++;
    }
     if(strcmp(ListeEtudiant[j].Departement,"construction")==0){
              sommeConctruction=ListeEtudiant[j].NoteGenerale+sommeConctruction;
 cont3++;
    }

}

(cont1 != 0) ? printf("moyenne de depatrement informatique est %.2f \n",sommeInfo/cont1) : printf("depatrement informatique  est vide \n");
(cont2 != 0) ? printf("moyenne de depatrement management est %.2f \n",sommeMangament/cont2): printf("depatrement management  est vide \n");
(cont3 != 0) ? printf("moyenne de depatrement construction est %.2f \n",sommeConctruction/cont3) : printf("depatrement construction  est vide \n");

}

void afficherET_seuil(){
    float seuil;
    printf("saisir un seuil ");
    scanf("%f",&seuil);
     for( int  j=0;j<i;j++){

     if ( ListeEtudiant[j].NoteGenerale>seuil)  {
      
       printf("\n ***Etudiant  :%d ***\n",j+1);
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NumeroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n ",ListeEtudiant[j].NoteGenerale);
        printf("Date de naissance :%d / %d /%d \n \n",ListeEtudiant[j].dateNaissance.jour,ListeEtudiant[j].dateNaissance.mois,ListeEtudiant[j].dateNaissance.anne);
            }
        }
    }
    


void statistiques(){
int cont1=0,cont2=0,cont3=0;

    printf("le nombre total d'étudiants inscrits:%d",i);
    for (int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Departement,"info")==0){
               cont1++;
          }
        if(strcmp(ListeEtudiant[j].Departement,"management")==0){
          cont2++;
    }
     if(strcmp(ListeEtudiant[j].Departement,"construction")==0){
        cont3++;
    }
    }
  printf("le nombre d'étudiants dans chaque département***** \n");
  printf("le Departement  informatrique contient  %d etudiant\n ",cont1);
    printf("le Departement management contient  %d etudiant \n ",cont2);
    printf("le Departement construction contient  %d etudiant \n  ",cont3);


afficherET_seuil();




}

int main() {

int choix,numero;
do{
    Menu();
printf("Saisir votre choix:");
scanf("%d",&choix);

 switch(choix){
    case 1: Ajouter() ;break;
    case 2: supprimerModifier() ;break;
    case 3:Afficher() ;break;
    case 4:MoyenneGeneral();break;
    case 5:statistiques();break;
    case 6:rechercher() ;break;
    case 7:tri() ;break;
    case 8:printf("quitter") ;break;

}


}while(choix!=8);


    return 0;

    }
