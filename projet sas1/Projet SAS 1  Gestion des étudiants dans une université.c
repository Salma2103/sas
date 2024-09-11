 #include <stdio.h>
#include <string.h>
struct Date{
    
    int jour;
    int mois ;
    int anne ;
};

struct Etudiant{
    
    int NuméroUnique;
    char Nom[20];
    char Prenom[20];
    struct Date dateNaissance;
    char Departement[20];
    float NoteGénérale;
};
void Menu(){
    printf("***********Menu************* \n");
    printf("Pour ajouter un étudiant cliquer sur :1  \n");
    printf("Pour modifier un étudiant cliquer sur :2  \n");
    printf("Pour supprimer un étudiant cliquer sur :3  \n");
    printf("Pour afficher les détails d'un étudiant cliquer sur :4  \n");
    printf("Pour Calculer la moyenne générale par département cliquer sur :5  \n");
    printf("Pour les tatistiques  cliquer sur :6  \n");
    printf("Pour Rechercher  un étudiant cliquer sur :7  \n");
    printf("Pour tri  des étudiants cliquer sur :8  \n  \n");

    
}
struct Etudiant ListeEtudiant[100];
int i=0;
void Ajouter(){
    printf("Enter le numero  :");
    scanf("%d",&ListeEtudiant[i].NuméroUnique);
    printf("Enter le nom :");
    scanf("%s",&ListeEtudiant[i].Nom);
    printf("Enter le prenom :");
    scanf("%s",&ListeEtudiant[i].Prenom);
    printf("Enter le Departement :");
    scanf("%s",&ListeEtudiant[i].Departement);
    printf("Enter la Note Générale :");
    scanf("%f",&ListeEtudiant[i].NoteGénérale);
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
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NuméroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGénérale); 
    }}
}

void Modifier(int numero){
 
    for(int j=0;j<i;j++){
        if(ListeEtudiant[j].NuméroUnique==numero){
             
             printf("Enter  le nouveau nom :");
             scanf("%s",&ListeEtudiant[j].Nom);
             printf("Enter le nouveau prenom :");
             scanf("%s",&ListeEtudiant[j].Prenom);
             printf("Enter le  nouveau Departement :");
             scanf("%s",&ListeEtudiant[j].Departement);
             printf("Enter la nouveau Note Générale :");
             scanf("%f",&ListeEtudiant[j].NoteGénérale);
        }
    }
        printf("les information de l'etudiant est modifer !!\n");
 
    
}

void Supprimer(int numero){
    for(int j=0;j<i;j++){
        if(ListeEtudiant[j].NuméroUnique==numero){
             for(int position=j;position<i;position++){
                 ListeEtudiant[position]=ListeEtudiant[position+1];
             }
          
        }
    }
    printf("etudiant est supprimer/!\n");

}


void rechercher(char nom[20],char departement[20]){
    
    for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Nom,nom)==0){
         
        printf("\n ***Etudiant est present  ***\n");
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NuméroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGénérale); 
        }
    }
     for(int j=0;j<i;j++){
        if(strcmp(ListeEtudiant[j].Departement,departement)==0){
           
        printf("\n ***Etudiant  de departement :%s ***\n",ListeEtudiant[j].Departement);
        printf("Etudiant numero :%d \n",ListeEtudiant[j].NuméroUnique);
        printf("Nom :%s \n",ListeEtudiant[j].Nom);
        printf("Prenom:%s \n",ListeEtudiant[j].Prenom);
        printf("Departement :%s \n",ListeEtudiant[j].Departement);
        printf("Note Générale :%.2f \n \n",ListeEtudiant[j].NoteGénérale); 
        }
    }
    
    
}


void statistiques(){
    printf("le nombre total d'étudiants inscrits:%d",i);
}


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




/*float MoyenneGeneral(){
    char dep[100];
    for(int j=0;j<i;j++){
        strcpy(dep[j],ListeEtudiant[j].Departement);
    }
     for(int j=0;j<i;j++){
        
         if(strcmp(dep[j],ListeEtudiant[j].Departement)==0){
             float somme=somme+ListeEtudiant[j].NoteGénérale;
         }
     }
    
    
    return ;
}*/


int main() {
    
int choix,numero;
char nom[20],depatrement[20];
do{
    Menu();
printf("Saisir votre choix:");
scanf("%d",&choix);

 switch(choix){
    case 1: Ajouter() ;break;
    case 2: Afficher() ;break;
    case 3:printf("Enter  le numero d'etudiant:");
            scanf("%d",&numero);
           Modifier(numero) ;break;
    case 4:printf("Enter  le numero d'etudiant:");
            scanf("%d",&numero);
           Supprimer(numero) ;break;
    case 5:printf("Enter  le numero d'etudiant:");
            scanf("%d",&numero);
           Supprimer(numero) ;break;

    case 6:printf("Enter  le nom d'etudiant:");
            scanf("%s",&nom);
            printf("Enter  le departement:");
            scanf("%s",&depatrement);
           rechercher(nom,depatrement) ;break;
}


}while(choix!=8);



    return 0;
}
