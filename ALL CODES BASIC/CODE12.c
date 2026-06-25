//WAP TO CALCULATE THE AREA OF CUBE.(BY USING THE SECOND VARIABLE)
#include<stdio.h>
int main()
{
    int a;
    float area;
    /*
    a = side
    */
    printf("THE SIDE OF CUBE\n");
    scanf("%d",&a);
    area = 6*a*a;
    printf("THE AREA OF CUBE %.2f",area);

    return 0;
}