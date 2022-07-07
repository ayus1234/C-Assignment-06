//Program to find last digit of a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last;
    printf("Enter any number\n");
    scanf("%d",&num);
    last=num%10;
    printf("Last Digit of the number is %d",last);
    getch();
}