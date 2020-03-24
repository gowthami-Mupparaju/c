 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b;
 char o;
 clrscr();
 printf("enter option");
 scanf("%c",&o);
 printf("enter values");
 scanf("%d%d",&a,&b);
 switch(o)
 {
 case '+' :
  printf("the addition of two numbers is:%d",a+b);
 break;
 case '-' :
 printf("the subtraction of two numbers is:%d",a-b);
 break;
 case '*' :
 printf("the multiplication of two numbers is:%d",a*b);
 break;
case '/' :
printf("the division of two numbers is: %d",a/b);
break;
case '%' :
printf("the module of two numbers is: %d",a%b);
break;
 default:
 printf("choose above option");
 }
 getch();
 }