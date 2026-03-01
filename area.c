// Que-find the area ?
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int height[9]={1,8,6,2,5,4,8,3,7};
//     int i=0;
//     int j=8;
//     int maxArea=0;
//     while (i<j)
//     {
//         int h;
//         if(height[i]<height[j]){
//             h=height[i];
//         }else
//         {
//             h=height[j];
//         }
//         int w=j-i;
//         int area=h*w;
//         if(area>maxArea){
//             maxArea=area;
//         }
//         if(height[i]<height[j]){
//             i++;
//         }else{
//             j--;
//         }
//     }
//     printf("%d",maxArea);
//     return 0;
// }


// struct student
// {
//     char name[50];
//     int RollNo;
//     int age;
// };
// int main(){
//     struct student s1;
//     s1.age=19;
//     printf("%d",s1.age);
//     return 0;
// }


struct student
{
    char name[50];
    int RollNo;
    int age;
};
 struct address 
 {
        int pincode;
 };
int main(){
    struct address s2;
    s2.pincode=482003;
    printf("%d",s2.pincode);
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// struct student
// {
// char name[10];
// int RollNo;
// float marks;
// };
// int main(){
//     struct student s1[5];
//     for(int i=0;i<5;i++){
//         printf("Enter your name");
//         scanf("%s",s1[i].name);
//     }
//     return 0;
// }