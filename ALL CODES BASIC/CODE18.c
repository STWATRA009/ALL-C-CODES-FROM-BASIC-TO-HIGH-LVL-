//WAP TO CALCULATE THE AREA OF SEMICIRCLE.(BY USING 2ND VARIABLE)
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    // r = radius
    float area;
    printf("THE RADIUS OF SEMICIRCLE\n");
    scanf("%d",&r);
    area = (PI*r*r)/2;
    printf("THE AREA OF THE SEMICIRCLE IS %.2f",area);

    return 0;
}