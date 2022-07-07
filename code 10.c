//Program to take a three digit number from the user and rotate its digits by one position towards the right

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,store,rotate_right;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    store=num%10;
    num=num/10;
    rotate_right=(store*100)+num;
    printf("%d",rotate_right);
    getch();
}