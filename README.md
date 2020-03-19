write a program to perform binary operators using switch case

#include<stdio.h>
#include<conio.h>
main()
{
char option;
int a,b,c;
clrscr();
printf("enter any option:");
scanf("%c",&option);
printf("Enter a and b values:");
scanf("%d%d",&a,&b);
switch(option)
{
case (+): c=a+b;
          printf("the addition of two numbers is: %d",c);
          break;
case (-): c=a-b;
          printf("the subtraction of two numbers is: %d",c);
          break;
case (*): c=a*b;
          printf("the multiplication of two numbers is: %d",c);
          break;
case (/): c=a/b;
          printf("the division of two numbers is: %d",c);
          break;
case (%): c=a%b;
          printf("the modulus of two numbers is: %d",c);
          break;
default :
          printf("choose the above option");
}
getch();
}
