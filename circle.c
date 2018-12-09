#include<stdio.h>
#include<math.h>
float calculate_area(float);
float calculate_circum(float);
int main()
{
    float radius,area,circumfarence;
    printf("Enter the radius :\n");
    scanf("%f",&radius);
    area =  calculate_area(radius);
    circumfarence = calculate_circum(radius);
    printf("Area :%.2f\n",area);
    //printf("Circum :%.2f",circumfarence);
}

float calculate_area(float rad){
       return (3.1416*rad*rad);
}

float calculate_circum(float radius){
    //return (2*3.1416*radius);
    printf("Circum :%.2f",2*3.1416*radius);
}



