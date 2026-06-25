//WAP TO CALCULATE THE AREA OF QUADRANT.(BY USING THE 2ND VARIABLE)
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    // r = radius
    float area;
    printf("THE RADIUS OF THE QUADRANT\n");
    scanf("%d",&r);
    area = (PI*r*r)/4;
    printf("THE AREA OF QUADRANT IS %.4f",area);
    
    return 0;
}