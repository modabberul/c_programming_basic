/* Write a programme that can Find 7 days name;
1= satuarday 2= sunday ...*/


#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Marks: ");
    scanf("%d",&a);
    switch(a){
    case 1: printf("Saturday");
    break;
    case 2: printf("Sunday");
    break;
    case 3: printf("Monday");
    break;
    case 4: printf("tuesday");
    break;
    case 5: printf("Wednesday");
    break;
    case 6: printf("Thursday");
    break;
    case 7: printf("Friday");
    break;
    default: printf("This is Not valid days");
    }


 }
