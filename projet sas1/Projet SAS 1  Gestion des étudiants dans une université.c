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
    printf("***********Menu************* \n");
    printf("Pour ajouter un étudiant cliquer sur :1  \n");
    printf("Pour modifier ou supprimer un étudiant cliquer sur :2  \n");
    printf("Pour afficher un étudiant cliquer sur :3  \n");
    printf("Pour afficher les détails d'un étudiant cliquer sur :4  \n");
    printf("Pour alculer la moyenne général  cliquer sur :5  \n");
    printf(" Pour Rechercher  un étudiant cliquer sur  :6  \n");
    printf("Pour tri  des étudiants cliquer sur :7  \n");


}
struct Etudiant ListeEtudiant[100];
int i=0;
void Ajouter(){
    ListeEtudiant[i].NumeroUnique=i+1;
    printf("Enter le nom :");
    scanf("%s",&ListeEtudiant[i].Nom);
    printf("Enter le prenom :");
    scanf("%s",&ListeEtudiant[i].Prenom);
    printf("Enter le Departement :");
    scanf("%s",&ListeEtudiant[i].Departement);
    printf("Enter la Note Générale :");
    scanf("%f",&ListeEtudiant[i].NoteGenerale);
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
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGenerale);
    }}
}

void Modifier(int numero){

    for(int j=0;j<i;j++){
        if(ListeEtudiant[j].NumeroUnique==numero){

             printf("Enter  le nouveau nom :");
             scanf("%s",&ListeEtudiant[j].Nom);
             printf("Enter le nouveau prenom :");
             scanf("%s",&ListeEtudiant[j].Prenom);
             printf("Enter le  nouveau Departement :");
             scanf("%s",&ListeEtudiant[j].Departement);
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
    }
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


void statistiques(){
    printf("le nombre total d'étudiants inscrits:%d",i);
}

/*
void tri(){
    for( int  j=0;j<i-1;j++){

        for (int k = 1; k< i - k - 1; k++) {

    if ( strcmp(ListeEtudiant[k].Nom,ListeEtudiant[k+1].Nom) > 0) {
        char tmp[20];
                strcpy(tmp,ListeEtudiant[k]);
                strcpy(ListeEtudiant[k],ListeEtudiant[k + 1]);
                strcpy(ListeEtudiant[k+1],tmp);

            }
        }
    }

    }


}






*/

 float MoyenneGeneral(){
     float somme=0;
    for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Departement,ListeEtudiant[j+1].Departement)==0){
            //strcpy(ListeEtudiant[j].Departement);
             somme=ListeEtudiant[j].NoteGenerale+somme/i;
    }

printf("moyenne est %.2f",somme);
    return ;
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

    case 6:rechercher() ;break;
}


}while(choix!=8);


    return 0;}
