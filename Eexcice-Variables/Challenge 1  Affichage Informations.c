 #include <stdio.h>

int main() {
   
char nom[20],prenom[20],mail[20],sexe[10];
int age;
 printf("entrer les informations ***\n");

 printf("saisir le  nom:");
 scanf("%s",&nom);  
 printf("saisir  le prenom:");
 scanf("%s",&prenom);  
 printf("saisir l'adresse mail:");
 scanf("%s",&mail);  
 printf("saisir le sexe:");
 scanf("%s",&sexe);  
 printf("saisir l'age:");
 scanf("%d",&age);
 
   printf("affichage des informations ***\n");
   printf("nom :%s \n",nom);
   printf("prenom :%s \n",prenom);
   printf("mail :%s  \n",mail);
   printf("sexe :%s \n",sexe);
   printf("age :%d  \n",age);
 

    return 0;
}
