#include <stdio.h>

int main (void)
{
    int a;
    double b;
    char c;

    printf("int형 변수의 주소 : %u\n", &a);     //int형 변수 선언
    printf("double형 변수의 주소 : %u\n", &b);  //double형 변수 선언
    printf("char형 변수의 주소 : %u\n", &c);    //char형 변수 선언

    return 0;
}