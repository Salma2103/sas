 #include <string.h>
 #include <stdio.h>



struct contact{
    char nom[20];
    char prenom[20];
    int telephone;
    char mail[40];
};

void menu(){
    printf("**********Menu************ \n");
    printf("pour ajouter un contact cliquer sur 1 \n");
    printf("pour supprimer un contact cliquer sur 2 \n");
    printf("pour modifier un contact cliquer sur 3 \n");
    printf("pour chercher un contact cliquer sur 4 \n");
    printf("pour afficher la liste des contacts cliquer sur 5 \n\n");
}
  struct contact contactList[100];
   int i=0;


void Ajouter(){
    struct contact person1;

printf("nom:");
scanf("%s",&person1.nom);
printf("prenom:");
scanf("%s",&person1.prenom);
printf("mail:");
scanf("%s",&person1.mail);
printf("telephone:");
scanf("%d",&person1.telephone);
 contactList[i]=person1;
    i++;
printf("Contact ajoute avec succes********.\n \n");

}



void afficher(){
    for(int j=0;j<i;j++){
        printf("\n contact :%d \n",j+1);

        printf("nom:%s \n",contactList[j].nom);
        printf("prenom:%s \n",contactList[j].prenom);
        printf("mail:%s \n",contactList[j].mail);
        printf("telephone:%d \n\n",contactList[j].telephone);

    }
}


void supprimer(char nom[20]){
    for(int j=0;j<i;j++){
      if( strcmp(contactList[j].nom,nom)==0){
       int pos=j ;
       for(pos=j;pos<i;pos++){
        contactList[pos]=contactList[pos+1];
       }
       i--;
       break;

    }


}
}
void modifier(char nom[20]){
    for(int j=0;j<i;j++){
if( strcmp(contactList[j].nom,nom)==0){
        printf("entrer un nouveau nom:");
        scanf("%s",&contactList[j].nom);
        printf("entrer un nouveau prenom:");
        scanf("%s",&contactList[j].prenom);
        printf("entrer un nouveau mail:");
        scanf("%s",&contactList[j].mail);
        printf("entrer un nouveau telephone:");
        scanf("%d",&contactList[j].telephone);

        break;
    }
    }
}

void chercher(char nom[40]){
    for(int j=0;j<=i;j++){

      if( strcmp(contactList[j].nom,nom)==0){

 printf("nom:%s \n", contactList[j].nom);
 printf("prenom:%s \n", contactList[j].prenom);
 printf("mail:%s \n", contactList[j].mail);
 printf("telephome:%d \n", contactList[j].telephone);
 break;
    }

    }
}

int main() {
   int typeOperation;
   char nom[40],new_nom[40];


  do{
  menu();

printf("Enter votre choix:");
scanf("%d",&typeOperation);

switch(typeOperation){
    case 1: Ajouter();break;
    case 2:
    printf("Enter nom du contact a supprimer:");
   scanf("%s",&nom);
    supprimer(nom);break;
    case 3:   printf("Enter nom du contact a modifier:");
    scanf("%s",nom);
    modifier(nom);break;
    case 4:
     printf("Enter nom du contact a chercher:");
    scanf("%s",nom);
    chercher(nom);break;
    case 5: afficher();break;
    default:printf("Choix invalide,ressayer.\n");


}

}
while(1);

    return 0;
    }
