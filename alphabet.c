#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z'))
{
printf("%c is a alphabet",ch);
}
else
printf("%c is not a not alphabet",ch);
getch();
}
