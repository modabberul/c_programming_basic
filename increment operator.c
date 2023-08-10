#include<stdio.h>
int main()
{
    //increment operator
    // ++i means first Increase Then Use
    // i++ means First USE then Increase
    int i =1;
    printf("%d\n",i++);//First USE then Increase
    printf("%d\n",i);

    int j=3;
    printf("%d\n",++j);
    printf("%d\n",j);
}
