//WAP TO CALCULATE THE AREA OF TRIANGLE. (BY UISNG 3RD VARIABLES)
#include<stdio.h>
int main()
{
    int b,h;
    float area;
    /*
    b = base
    h  height
    */
    printf("THE BASE AND HEIGHT OF TRIANGLE\n");
    scanf("%d %d",&b,&h);
    area = 0.5*b*h;
    printf("THE AREA OF THE TRIANGLE %.2f",area);

    return 0;
}