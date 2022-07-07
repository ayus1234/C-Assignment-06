//Program to find middle digit of a given three digit number

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,mid;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    num=num/10;
    mid=num%10;
    printf("Middle Digit of the number is %d",mid);
    getch();
}