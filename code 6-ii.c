//Program to swap values of two int variables without using third variable

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("Swapped Values\n");
    printf("%d\n%d",num1,num2);
    getch();
}