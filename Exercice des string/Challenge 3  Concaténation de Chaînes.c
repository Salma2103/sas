 #include <stdio.h>
 #include <string.h>

int main() {

char name[20],name2[20];
scanf("%s",name);
scanf("%s",name2);
strcat(name,name2);
/*int size=0,j=0;
for(int i=0;i<20;i++){
 if(name[i]=='\0'){

     name[i]=name2[j];

     j++;
    }

}*/

 printf("%s",name);
    return 0;
}
