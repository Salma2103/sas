 #include <string.h>
 #include <stdio.h>
 
 
 
struct contact{
    char nom[20];
    char prenom[20];
    int telephone;
    char mail[40];
};
void menu(){
    printf("Menu*** \n");
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
        printf("nom:%s \n\n\n",contactList[j].nom);
        
    }
}

void supprimer(char nom[20]){
    for(int j=0;j<i;j++){
      if( strcmp(contactList[j].nom,nom)==0){
       int pos=j ;continue;
  // printf("%d",j);

    }
    
  
}
}
void modifier(char new_nom[20],char nom_modifier[40]){
    for(int j=0;j<i;j++){
if( strcmp(contactList[j].nom,nom_modifier)==0){
   strcpy(contactList[j].nom,new_nom);
 
    }        
    }
}

void chercher(char nom[40]){
    for(int j=0;j<i;j++){
      if( strcmp(contactList[j].nom,nom)==0){
   
 printf("nom:%s \n", contactList[j].nom);
 printf("prenom:%s \n", contactList[j].prenom);
 printf("mail:%s \n", contactList[j].mail);
 printf("telephome:%s \n", contactList[j].telephone);
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
   scanf("%d",&nom);
    supprimer(nom);break;
    case 3:     printf("Enter nom du contact a modifier:");
    scanf("%d",&nom);
      printf("Enter le nouvel  nom du contact:");
    scanf("%d",&new_nom);
    modifier(new_nom,nom);break;
    case 4: 
     printf("Enter nom du contact a chercher:");
    scanf("%d",&nom);
    chercher(nom);break;
    case 5: afficher();break;
    default:printf("Choix invalide,ressayer.\n");
    
    
}

}
while(1);

    return 0;}
