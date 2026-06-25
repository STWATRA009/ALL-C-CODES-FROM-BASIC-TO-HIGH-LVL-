//WAP TO CALCULATE THE AREA OF SEMICIRCLE.(BY USING SINGLE VARIABLE)
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    // r = radius
    printf("THE RADIUS OF A SEMICIRCLE\n");
    scanf("%d",&r);
    printf("THE AREA OF SEMICIRCLE IS %.2f",(PI*r*r)/2);

    return 0;
}