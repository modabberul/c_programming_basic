#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Marks: ");
    scanf("%d",&a);
    if(a>=80){
        printf("\n\nYour Result: A+\n\n");
    }
    else if(a>70 && a<80){
        printf("\n\nYour Result: A\n\n");
    }
    else if(a<33)
        printf("\n\nyou are Fail\n\n");
    else
        printf("\n\nYour result: PASS\n\n");
}
