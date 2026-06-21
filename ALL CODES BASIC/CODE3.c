//WAP TO CALCUALTE THE AREA OF A SQUARE.(BY USING 2 VARIABLES)
#include<stdio.h>
int main()
{
    float side,area;
    printf("ENTER THE SIDE OF THE SQUARE\n");
    scanf("%f",&side);
    area = side*side;
    printf("THE AREA OF THE SQUARE = %.2f",area);

    return 0;
}