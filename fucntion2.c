/*Write an function that print Assalamualikum
if User is Bangladeshi & bonjur if the user
    is french */


#include<stdio.h>

void salam();
void bonjur();

int main()
{
    int a,b;
    printf("Enter Your Nationality\n");
    printf("1. Bangladesh\n2.French\n");
    printf("press 1 or 2\n");
    scanf("%d",&a);
    if(a==1){
        salam();}
    else if(a==2){
        bonjur();
    }
    else printf("Please Press Correct Number!\n");

    return 0;
}

void salam(){
printf("Assalamualikum\n");
}

void bonjur(){
printf("bonjur\n");
}
