//WAP TO CALCULATE THE AREA OF QUADRANT.(BY USING SINGLE VARIABLE)
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    // r = radius
    printf("THE RADIUS OF THE QUADRANT\n");
    scanf("%d",&r);
    printf("THE AREA OF THE QUADRANT IS %.4f",((PI*r*r)/4));

    return 0;
}