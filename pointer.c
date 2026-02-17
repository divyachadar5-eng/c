// Que. write a code for pointer. 
// #include <stdio.h>
// int swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("%d %d" ,*x,*y);
// }
// int main(){
//     int x=10;
//     int y=20;
//     swap(&x,&y);
//     return 0;
// }

// #include <stdio.h>
// int swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("%d %d" ,*a,*b);
// }
// int main(){
//     int a=5;
//     int b=10;
//     swap(&a,&b);
//     return 0;
// }


// int main(){
// int arr[4]={1,2,3,4};
// int *p=arr;
// printf("%d",*(p+2));
// for(int i=0;i<4;i++){
//     printf("%d",*(p+i));
// }
// return 0;
// }

// Que-double diamentional (2d) array ?
// int main(){
//     int x=123;
//     int sum=0;
//     while(x>0){
//         int lastdigit=x%10;
//         sum+=lastdigit;
//         x/=10;
//         print("%d",sum);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==2){
                printf("%d ",arr[i][j]);
            }else if( j==i){
                printf("%d ",arr[i][j]);
            }
            else
            { 
                printf("\n");
            }
        }
    }
    return 0;
}