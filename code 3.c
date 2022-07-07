// Program to find first digit of a given three digit number

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,first;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    first=num/100;
    printf("First Digit of the Number is %d",first);
    getch();
}