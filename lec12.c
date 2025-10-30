//Que. write a code to array using by loop.
// #include <stdio.h>
// int main(){
//     int a=100;
//     int b=101;
//     int arr[5]={1,2,3,4,5};
//     printf("%d",arr[1]);
//     return 0;
// }

// int main(){
//     int arr[5]={1,2,3,4};
//     for(int i=0; i<4; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// int main(){
//     int arr[4]={1,2,3,4,5};
//     for(int i=0; i<3; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }


// int main(){
//     int arr[5]={1,2,3,4};
//     int sum=0;
//     for(int i=0; i<3; i++)
// {
//     sum= sum+arr[i];
// }
// printf("%d",sum);
// return 0;
// }


// int main(){
//     int arr[5]={1,2,3,6,5};
//     int max=arr[0];
//     for(int i=0; i<4; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         printf("%d",max);
//     }
//     return 0;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int min=arr[0];
//     for(int i=0; i<5; i++){
//      if(arr[i]>min){
//         min=arr[i];
//      }
//      printf("%d",min);
//     }
//     return 0;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int target=5;
//     for(int i=0;i<5;i++){
//         printf("%d",i);
//     }
// return 0;
// }

//sliding window ?
// int main(){
//     int arr[5]={1,2,3,5,6,5,4};
//     int k=3;
//     int n=7;    sizeof(arr)/sizeof(arr[0]);
//     int WindowSum=0;
//     for(int i=0;i<k;i++){
//         windowSum=windowSum+arr[i];
//     }
//     int maxSum=windowSum;

//     for(int j=k;j<n;j++){
//         windowSum=windowSum+arr[j]-arr[j-k];
//         if(windowSum>maxSum){
//             maxSum=windowSum;
//         }
//         printf("%d",maxSum);
//         return 0;
//     }
//     int maxSum=0;
//     for(int i=0; i<n-k;i++){
//         int currSum=0;
//         for(int j=i;j<i+k;j++){
//             currSum=currSum+arr[j];
//         }
//         if(currSum>maxSum){
//             maxSum=currSum;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[5]={10,20,30,40,50};
//     int first=arr[0];
//     for(int i=0; i<5; i++){
//         arr[i]=arr[i+1];
//     }
// arr[4]=first;
// for(int k=0;k<5;k++){
//     printf("%d",arr[k]);}
// return 0;
// }

// int main(){
//     int arr[5]={1,2,3,2,2};
//     int istrue=1;
//     for(int i=0;i<5/2;i++){
//         if(arr[i]!=arr[5-i-1]){
//             istrue=0;
//         }
//     }
//     if(istrue=1){
//         printf("haii");
//     }else{
//         printf("nhi haii");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <limits.h>
// int main(){
//     int arr[6]={0,-5,3,-4,5,7};
//     int maxSum=INT_MIN;
//     for(int i=0;i<6;i++){
//         int currSum=0;
//         for(int j=0;j<6;j++){
//             currSum=currSum+arr[j];
//         }
//         if(currSum>maxSum){
//             maxSum=currSum;
//         }
//     }
//     printf("%d",maxSum);
//     return 0;
// }

//find the maximum sum subarray of size k ?
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=2;
//     int windowsum=0;
//     int maxsum=0;
//     for(int i=0;i<k;i++){
//         windowsum+=arr[i];
//     }
//     for(int i=k;i<n;i++){
//         windowsum+=arr[i]-arr[i-k];
//         if(windowsum>maxsum){
//             maxsum=windowsum;
//     }
//     }
//     printf("%d",windowsum);
//     return 0;
// }

// //find first nagetive number?
// #include <stdio.h>
// int main(){
//     int arr[]={12,-1,-7,8,-15,30,16,28};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=2;
//     for(int i=0; i<=n-k; i++){
//         int found=0;
//     for(int j=i; j<i+k; j++){
//         if(arr[j]<0){
//             printf("%d",arr[j]);
//             found=1;
//             break;
//         }
//     }
//     if(!found){
//         printf("0");
//     }
// }
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
//     int maxSum=wSum;g
//     for(int i=k;i<5;i++){
//         wSum=wSum+arr[i]-arr[i-k];
//         if(wSum>maxSum){
//             maxSum=wSum;
//         }
//     }
//     printf("%d",maxSum);
//     return 0;
// }