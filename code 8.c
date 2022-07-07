//Program to make the last digit of a number stored in a variable as zero

#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    num1=num1*10;
    num2=num1+num2;
    printf("Appended Number = %d",num2);
    getch();
}