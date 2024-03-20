#include<stdio.h>

int main(){
    int a;
    int b;
    int sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a+b;
    printf("Sum of a and b is : %d", sum);
    return 0;
}