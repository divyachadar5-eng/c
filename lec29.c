// #include<stdio.h>
// int sum(int a){
// return 1;
// }
// int main(){
//     int data=sum(5);
//     printf("%d",data);
// }

// #include<stdio.h>
// void sum(int a){
// if(a==0){
// return;
// }
// sum(a-1);
// printf("%d",a);
// }
// int main(){
//     sum(5);
// }

// #include<stdio.h>
// void sum(int a){
// if(a==0){
// return;
// }
// printf("%d",a);
// sum(a-1);
// }
// int main(){
//     sum(5);
// }

#include<stdio.h>
int sum(int a){
if(a==0){
return 0;
}
return a+sum(a-1);
}
int main(){
    int data=sum(7);
    printf("%d",data);
    sum(7);
}