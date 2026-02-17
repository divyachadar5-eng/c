//write a code two swap the variable using two value.
#include <stdio.h>

int swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
printf("%d %d", *a,*b);
}
int main(){
    int a=15;
    int b=20;
    swap(&a,&b);
    return 0;
}