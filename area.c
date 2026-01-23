//Que. find the area.
#include <stdio.h>

// int main()
// {
//     int side;
//     printf("Enter side");
//     scanf("%d",&side);
//     printf("area is: %d",side*side);
//     return 0;
// }


#define PI 3.14
int main()
{
    float radius, area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("Area of the cicle : %.2f\n", area);
    return 0;
}