//WAP TO CALCULATE THE AREA OF CIRCLE. (BY USING TWO VARIABLES)
#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,area;
    printf("ENTER THE RADIUS OF THE CIRCLE\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("THE AREA OF A CIRCLE = %.2f",area);

    return 0;
}
