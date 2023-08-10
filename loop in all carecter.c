#include<stdio.h>
int main()
{

    for(float i = 1.0; i<=10; i++){
        printf("%.1f\n",i);
    }
    for(char j='A'; j<='Z'; j++){
        printf("%s\n",&j);
    }
    for(char ch = 'a'; ch<='z'; ch++)
        {
        printf("%c\n",&ch);
    }

}
