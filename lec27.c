// #include<stdio.h>
// int main(){
//     int arr[6]={7,1,5,3,6,4};
//     int minBuy=arr[0];
//     int maxP=0;

//     for(int i=1;i<6;i++){
//         if(arr[i]<minBuy){
//             minBuy=arr[i];
//         }else{
//             int profit=arr[i]-minBuy;
//             if(profit>maxP){
//                 maxP=profit;
//             }
//         }
//         printf("%d",maxP);
//     }
// }

#include<stdio.h>
int main(){
    int n=5;
    if(n||1){
        printf("odd");
    }else{
        printf("even");
    }
}