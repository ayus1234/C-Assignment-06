//Program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    int a;
    char ch;
    float f;
    double d;
    i=sizeof(i);
    j=sizeof(ch);
    k=sizeof(f);
    l=sizeof(d);
    printf("Size of int is %d bytes",i);
    printf("\nSize of char is %d bytes",j);
    printf("\nSize of float is %d bytes",k);
    printf("\nSize of double is %d bytes",l);
    getch();
}