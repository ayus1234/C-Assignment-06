// Program to make the last digit of a number stored in a variable as zero

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,last0;
    printf("Enter any number\n");
    scanf("%d",&num);
    temp=num%10;
    last0=num-temp;
    printf("%d",last0);
    getch();
}