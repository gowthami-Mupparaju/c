#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=6;i++)
 {
  for(j=6;j>=i;j--)
   {
     printf("%d",i);
   }
printf("\n");
}
getch();
}