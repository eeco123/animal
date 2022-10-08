#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
  {
   clrscr();
      gotoxy(5,9);
      printf("CANNT STATION");
      for(int i=0;i<10;i++)
       {
	gotoxy(10+i,10);
	printf("%c",220);
	delay(100);
       }
       gotoxy(22,10);
       printf("CHOWKA GHAT");
       for(i=0;i<10;i++)
       {
	gotoxy(20,10+i);
	printf("%c",221);
	delay(100);
       }
       gotoxy(21,18);
       printf("GAZIPUR ROAD");
       for(i=0;i<10;i++)
       {
	gotoxy(19-i,18);
	printf("%c",220);
	delay(100);
       }
   gotoxy(5,16);
       printf("KALI MANDIR");
       for(i=0;i<10;i++)
       {
	gotoxy(12,19+i);
	printf("%c",221);
	delay(100);
       }
    getch();
