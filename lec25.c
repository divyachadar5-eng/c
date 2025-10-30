//Trap water
// #include <stdio.h>
// int main(){
//     int letMax[6];
//     // int height[12]={0,1,0,2,1,0,1,3,2,1,2};
//           int height[6]=        {4,2,0,3,2,5};
//     int rightMax[6];
//     int water=0;i
//     letMax[0]=height[0];
//     for(int i =1;i<6;i++){
//         if(height[i]>letMax[i-1]){
//             letMax[i]=height[i];
//         }else{
//             letMax[i]=letMax[i-1];
//         }
//     }
//         rightMax[5]=height[5];
//      for(int i =3;i>=0;i--){
//         if(height[i]>rightMax[i+1]){
//             rightMax[i]=height[i];
//         }else{
//             rightMax[i]=rightMax[i+1];
//         }
//     }


//     for(int i=0;i<6;i++){
//     int minHieght;
//         if(letMax[i]<rightMax[i]){
//             minHieght=letMax[i];
//         }else 
//         {
//             minHieght=rightMax[i];
//         }
//         water=water+(minHieght-height[i]);
        
//     }
//     printf("%d",water);
    
// }


// #include<stdio.h>
// int main()
// {
//     int letMax[6];
//     int height[6]={5,6,0,3,5,2};
//     int rightmax[6];
//     int water=0;
//     letMax[0]=height[0];
//     for(int i =1;i<6;i++){
//         if(height[i]>letMax[i-1]){
//             letMax[i]=height[i];
//         }else{
//             letMax[i]=letMax[i-1];
//         }
//     }
//         rightmax[5]=height[5];
//      for(int i =3;i>=0;i--){
//         if(height[i]>rightmax[i+1]){
//             rightmax[i]=height[i];
//         }else{
//             rightmax[i]=rightmax[i+1];
//         }
//     }
//     for(int i=0;i<6;i++){
//     int minHieght;
//         if(letMax[i]<rightmax[i]){
//             minHieght=letMax[i];
//         }else 
//         {
//             minHieght=rightmax[i];
//         }
//         water=water+(minHieght-height[i]);
//     }
//     printf("%d",water);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[5]={5,4,0,2,0,12};
//     int j=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]!=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }
// for(int i=0;i<5;i++){
//     printf("%d",arr[i]);
// }

// }


#include<stdio.h>
int main()
{
    int arr[5]={5,4,0,2,0,12};
    int j=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]!=arr[j];
            arr[j]=temp;
            j++;
        }
    }
for(int j=0;j<5;j++){
    printf("%d",arr[j]);
}
}