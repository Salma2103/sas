 #include <stdio.h>
 #include <string.h>

int main() {

char name[20];
scanf("%s",name);
int size=0;
for(int i=0;i<20;i++){
   if(name[i]=='\0'){
     size=i;
    printf("%d",i);break;
   }else{continue;}


}


    return 0;
}
