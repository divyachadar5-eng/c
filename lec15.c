// Que. write a code array of charecter.
// #include <stdio.h>
// int main(){
//     char name[] = "divya";
//     printf("Name: %c",name[0]);
//     return 0;
// }

// int main(){
//     char name[] = "divya";
//     int i = 0;
//     while(name[i] != '\0'){
//     printf("%c\n",name[i]);
//     i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
// char name[] = "divya";
// int i = 0;
// int ln= strlen(name);
// printf("%d",ln);
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[] = "divya";
//     char data[10];

//     for(int i=0;name[i]!='\0';i++){
//         data[i]=name[i];
//     }
//         printf("%s",data);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Madam";
    int ln= strlen(name);
    int isTrue=1;
    for(int i=0;i<ln/2;i++){
        if(name[i]!=name[ln-i-1]){
            isTrue=0;
            break;
        }
    }
    if("istrue==1"){
return 0;
    }
}
