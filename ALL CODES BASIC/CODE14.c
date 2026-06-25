//WAP TO CALCULATE THE AREA OF CUBOID. (BY USING THE 4TH VARIABLE)
#include<stdio.h>
int main()
{
    int l,w,h;
    float area;
    printf("THE LENGTH , WIDTH AND HEIGHT OF CUBOID\n");
    scanf("%d %d %d",&l,&w,&h);
    area = 2*((l*w)+(l*h)+(w*h));
    printf("THE AREA OF THE CUBOID IS %.2f",area);
    
    return 0;
}