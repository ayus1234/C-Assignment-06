//Program to take the amount in INR and convert it into USD

#include<Stdio.h>
#include<conio.h>
int main()
{
    float rupee,dollar;
    printf("Enter the Amount in INR\n");
    printf("Rs.");
    scanf("%f",&rupee);
    dollar=rupee/76.23;
    printf("Amount in USD\n");
    printf("$%f",dollar);
    getch();
}