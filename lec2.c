//write a code increment and decrement?
#include <stdio.h>
//  int main(){
//     int a=5;
//     int b=3;
//     int sum= a++ + ++b + --b + b-- + ++a;
//     printf("%d",sum);

//     return 0;
// }

// int main(){
//     int a=6;
//     int b=5;
//     int sum= a-- + --b + ++b + b++ + --a;
//     printf("%d",sum);
//     return 0;
// }

int main(){
    int a=10;
    int b=9;
    int sum= a++ + b-- + b++ + b-- + ++a;
    printf("%d",sum);
    return 0;
}