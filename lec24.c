
#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int RollNo;
    float marks;
};
int main(){
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter your name");
        scanf("%s",s1[i].name);
    }
    return 0;
}


