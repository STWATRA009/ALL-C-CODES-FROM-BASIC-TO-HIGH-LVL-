//THE CODE OF A FUNCTION WITH HAVING A THIRD VARIABLE.
#include<stdio.h>
int main()
{
    int a,b;
    int sum,diff,mult,div;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);

    sum = a+b;
    diff = a-b;
    mult = a*b;
    div = a/b;

    printf("THE SUM OF NO = %d\n",sum);
    printf("THE DIFF OF NO = %d\n",diff);
    printf("THE MULT OF NO = %d\n",mult);
    printf("THE DIV OF NO = %d\n",div);

    return 0;
}