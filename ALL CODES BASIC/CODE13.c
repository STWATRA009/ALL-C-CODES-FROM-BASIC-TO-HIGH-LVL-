//WAP TO CALCULATE THE AREA OF CUBOID.(BY USING THREE VARIABLES)
#include<stdio.h>
int main()
{
    int l,w,h;
    /*
    l = length
    w = width
    h = height
    */
   printf("THE LENGTH , WIDTH AND HEIGHT OF THE CUBOID IS\n");
   scanf("%d %d %d",&l,&w,&h);
   printf("THE AREA OF CUBOID IS %d",2*((l*w)+(l*h)+(w*h)));
   return 0;
}