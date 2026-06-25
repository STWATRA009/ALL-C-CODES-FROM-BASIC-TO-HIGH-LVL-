//WAP TO CALCULATE THE AREA OF SPHERE.(BY USING 2ND VARIABLE)
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    //r = radius
    float area;
    printf("THE RADIUS OF SPHERE\n");
    scanf("%d",&r);
    area = 4*PI*r*r;
    printf("THE AREA OF SPHERE IS %.2f",area);

    return 0;
}