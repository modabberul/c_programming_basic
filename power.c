#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    printf(" *****POWER Calculator*****\n");
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    c = pow(a,b); //pow(a,b); means = a power b
    printf("%d",c);


    return 0;


}
