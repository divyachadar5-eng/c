//Que. write a code 2Darray using by the loop.
// #include <stdio.h>
// int main(){
//     int arr[2][2]={{2,4},{5,6}};
//     int arr1[4];
//     int k=0;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//               arr1[k]=arr[i][j];
//               k++;
//         }
//     }
//     for(int i=0;i<4;i++){
//         printf("%d",arr1[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int arr[5]={1,-4,6,7,3};
//     int k=3;
//     int wSum=0;
//     for(int i=0;i<k;i++){
//     wSum+=arr[i];
//     }
//     int maxSum=wSum;
//     for(int i=k;i<5;i++){
//         wSum=wSum+arr[i]-arr[i-k];
//         if(wSum>maxSum){
//             maxSum=wSum;
//         }
//     }
//     printf("%d",maxSum);
//     return 0;
// }

int main(){
    int arr[2][2]={{7,8},{5,6}};
    int arr1[4];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        arr1[k]=arr[i][j];
        k++;
        }
    }
        for(int i=0;i<4;i++){
        printf("%d",arr1[i]);
    }
    return 0;
}