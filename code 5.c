//Program to swap values of two int variables

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,swap;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    swap=num1;
    num1=num2;
    num2=swap;
    printf("Swapped Values\n");
    printf("%d\n%d",num1,num2);
    getch();
}