#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Marks: ");
    scanf("%d",&a);
    switch(a){
    case 80: printf("\nA+\n");
    break;
    case 32: printf("\n\n FAil\n\n");
    break;
    default: printf("\npass\n");

    }
}
