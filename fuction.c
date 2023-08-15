#include<stdio.h>
void print(); //declaration/ prototype
int main()
{
    print();
    print(); //function call
    return 0;
}

//function definition

void print(){
  char a;
  printf("hello\n");
  printf("My name is = ");
  scanf("%s",&a);
}
