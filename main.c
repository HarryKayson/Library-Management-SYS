/****************************************
Project :LIBRARY MANAGEMENT SYSTEM
Authors :Harrison Ngatia DSE-01-0167/2021
        :lewis Kirori    DSE-01-0174/2021
        :Dedan Mugambi   DSE-01-0045/2020
*****************************************/
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define RETURNTIME 15






    /*********************************************FUNCTIONS FOR AESTHETIC PURPOSES***************************************************/
void printBoxSlowly(void);
void printBox(void);
void clearArea(int,int,int,int);
void gotoxy(short x, short y);
void goodbye(int,int);
int t(void);
void delay (unsigned int mseconds);
/********************************************* FUNCTIONS *********************************************************/
char catagories[][20]={"Engineering","Health Science","Humanities","Theology","Mathematics","Electronics"};
void mainmenu();




/******************************************* GLOBAL VARIABLES ****************************************************/
int s;
char findbook;
char password[10]={"fcit"};
struct date
{
	int dd,mm,yy;
};
struct books
{
 int id;
 char name[30];
 char bookname[30];
 char author[30];
 char *cat;
 int quantity;
 float price;
 int count;
 int rackno;
 struct date issuedate;
 struct date duedate;
};
struct books x;

FILE *fp,*ft,*fs;

/******************************************* MAIN FUNCTION *******************************************************/
void main(){
 system("mode con: cols=200 lines=80");
 HWND hWnd = GetConsoleWindow();
 ShowWindow(hWnd,SW_SHOWMAXIMIZED);
 mainmenu();

}
void printBoxSlowly(void){
	int i,x,a=24,b=5,c;
    for(i=0;i<=30;i++){
    switch(i){
	case 1:
	 gotoxy(a,b);
     for(x=1;x<=130;x++)
     {
     delay(1);
     printf("|");
	 }
	 break;
	case 2:
	 gotoxy(a,b+1);
     for(x=1;x<=130;x++)
     {
     delay(1);
     printf("|");
	 }
	 break;
    case 3:
     gotoxy(a,b+2);
     for(x=1;x<=130;x++)
     {
     delay(1);
     printf("|");
	 }
     break;
	 case 4:
	 gotoxy(a,b+3);
     for(x=1;x<=130;x++)
     {
     delay(1);
     printf("|");
	 }
     break;
	 case 5:
	 gotoxy(a,b+4);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+4);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 6:
	gotoxy(a,b+5);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+5);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 7:
	  gotoxy(a,b+6);
	  for(x=1;x<=5;x++)
	  {
	   delay(1);
	   printf("|");
	  }
	   gotoxy(a+125,b+6);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 8:
	  	gotoxy(a,b+7);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+7);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 9:
	  gotoxy(a,b+8);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+8);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 10:
	 gotoxy(a,b+9);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+9);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 11:
	 	gotoxy(a,b+10);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+10);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 12:
	 	gotoxy(a,b+11);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+11);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 13:
	 	gotoxy(a,b+12);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+12);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 14:
	 	gotoxy(a,b+13);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 gotoxy(a+125,b+13);
	 for(x=1;x<=5;x++)
	 {
	 	delay(1);
	 	printf("|");
	 }
	 break;
	 case 15:
	  gotoxy(a,b+14);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+14);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 16:
	  	gotoxy(a,b+15);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+15);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 17:
	  	gotoxy(a,b+16);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+16);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 18:
	  	gotoxy(a,b+17);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+17);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 19:
	  	gotoxy(a,b+18);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+18);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 20:
	  	gotoxy(a,b+19);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+19);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 21:
	  	gotoxy(a,b+20);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  gotoxy(a+125,b+20);
	  for(x=1;x<=5;x++)
	  {
	 	delay(1);
	 	printf("|");
	  }
	  break;
	  case 22:
	  	gotoxy(a,b+21);
     for(x=1;x<=130;x++)
     {
     delay(1);
     printf("|");
	 }
	 break;
	  case 23:
	 	gotoxy(a,b+22);
        for(x=1;x<=130;x++)
        {
         delay(1);
         printf("|");
	    }
	    break;
	 case 24:
	 	gotoxy(a,b+23);
        for(x=1;x<=130;x++)
        {
         delay(1);
         printf("|");
	    }
	    break;
	 case 25:
	 	gotoxy(a,b+24);
        for(x=1;x<=130;x++)
        {
         delay(1);
         printf("|");
	    }
	    break;
	 }
}
}
void clearArea(int x, int y, int width, int height){
	int x1 = x;
	int i,j;
	for(i = 1; i <= height; i++){
		for (j = 1; j <= width; j++){
			gotoxy(x,y); printf(" ");
			x++;
		}
		x = x1;
		y++;
	}
}
void printBox(void){
	 int i,x,a=24,b=5,c;
    for(i=0;i<=30;i++){
    switch(i){
	case 1:
	 gotoxy(a,b);
     for(x=1;x<=130;x++)
     {
     printf("|");
	 }
	 break;
	case 2:
	 gotoxy(a,b+1);
     for(x=1;x<=130;x++)
     {
     printf("|");
	 }
	 break;
    case 3:
     gotoxy(a,b+2);
     for(x=1;x<=130;x++)
     {
     printf("|");
	 }
     break;
	 case 4:
	 gotoxy(a,b+3);
     for(x=1;x<=130;x++)
     {
     printf("|");
	 }
     break;
	 case 5:
	 gotoxy(a,b+4);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+4);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 6:
	gotoxy(a,b+5);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+5);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 7:
	  gotoxy(a,b+6);
	  for(x=1;x<=5;x++)
	  {
	   printf("|");
	  }
	   gotoxy(a+125,b+6);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 8:
	  	gotoxy(a,b+7);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+7);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 9:
	  gotoxy(a,b+8);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+8);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 10:
	 gotoxy(a,b+9);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+9);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 11:
	 	gotoxy(a,b+10);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+10);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 12:
	 	gotoxy(a,b+11);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+11);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 13:
	 	gotoxy(a,b+12);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+12);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 14:
	 	gotoxy(a,b+13);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 gotoxy(a+125,b+13);
	 for(x=1;x<=5;x++)
	 {
	 	printf("|");
	 }
	 break;
	 case 15:
	  gotoxy(a,b+14);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+14);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 16:
	  	gotoxy(a,b+15);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+15);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 17:
	  	gotoxy(a,b+16);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+16);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 18:
	  	gotoxy(a,b+17);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+17);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 19:
	  	gotoxy(a,b+18);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+18);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 20:
	  	gotoxy(a,b+19);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+19);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 21:
	  	gotoxy(a,b+20);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  gotoxy(a+125,b+20);
	  for(x=1;x<=5;x++)
	  {
	 	printf("|");
	  }
	  break;
	  case 22:
	  	gotoxy(a,b+21);
     for(x=1;x<=130;x++)
     {
      printf("|");
	 }
	 break;
	  case 23:
	 	gotoxy(a,b+22);
        for(x=1;x<=130;x++)
        {
         printf("|");
	    }
	    break;
	 case 24:
	 	gotoxy(a,b+23);
        for(x=1;x<=130;x++)
        {
         printf("|");
	    }
	    break;
	 case 25:
	 	gotoxy(a,b+24);
        for(x=1;x<=130;x++)
        {
         printf("|");
	    }
	    break;
	 }
	 }
}
void gotoxy(short x, short y)
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void delay (unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
/***************************************** FUNCTION DEFINITION ***************************************************/
void mainmenu(){
	printBoxSlowly();
    gotoxy(75,31);
    t();
    gotoxy(75,10);
    printf("WELCOME TO COUNTY LIBRARY MANAGEMNET");
    gotoxy(55,12);
    printf("1.STUDENTS USE");
    gotoxy(55,13);
    printf("2.OFFICE USE");
    gotoxy(55,14);
    printf("3.EXIT");
    gotoxy(55,16);
    printf("CHOOSE ONE: ");
    char ch;
    ch = getch();
    	switch(ch){
        case '1':
         students();
         break;
         case '2':
         office();
         break;
        case '3':
         goodbye(13,4);
         break;
		}

}
  int t(void){
	time_t t;
	time(&t);
	printf("%s",ctime(&t));




	return 0;
}
