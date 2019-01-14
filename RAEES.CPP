#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int exi1();
int exi2();
int amount1=0,amount2=0,choice,c1=0,c2=0,c3=0,c4=0,c5=0,r1=0,r2=0,r3=0,r4=0,r5=0,d1=0,d2=0;
int p1[5][5],p2[5][5],a[30];
int z1,z2,i,j,n,c=0;
char pl1[20],pl2[20];
char again='y';
void main()
{ clrscr();
	int level,r,j=1,k=2,m=1,z1=0,z2=2,z3=7,z4=6,z5=5,z6=7;
	int gd=DETECT,gm,midx,midy;
	initgraph(&gd,&gm,"c:\\TC\\BG!");

	midx = getmaxx()/2;
	midy = getmaxy()/2;
	setcolor(GREEN);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	rectangle(midx-130,midy-190,midx+130,midy+190);
	circle(midx,midy,90);
	rectangle(midx-240,midy-100,midx+240,midy+100);
	circle(midx,midy,110);
	rectangle(midx-350,midy-110,midx+350,midy+110);
	circle(midx,midy,130);

	outtextxy(midx,midy-10,"$$WELCOME RAEES..$$");
	outtextxy(midx,midy-40,"GAME CREATED BY AR PRODUCTION !!!!!!");

	outtextxy(midx,midy+40,"MADE BY RITESH");

	getch();
	cleardevice();
  //	outtextxy(midx,midy-20,"IN THIS GAME YOU HAVE TO CHECK YOU LUCK ");
    //	outtextxy(midx,midy-40,"AT A PRESENT TIME..");
	setcolor(GREEN);
	outtextxy(midx,midy-50,"*INTRODUCTION*");
	cout<<"\n1.ENTER THE NAME OF FIRST AND SECOND PLAYER.";
	cout<<"\n2.ENTER WHAT AMOUNT OF MONEY HE/SHE USED IN THIS GAME. ";
	cout<<"\n3.ENTER RANDOMALLY OR IN A SERIES OF NUMBERS FROM 1 TO 25.";
	cout<<"\n4.PLEASE NOTICED THAT NO TWO MISMACHING NUMBERS IS TO BE ENTERED .";
	cout<<"\n5.IF TWO MISMATCHING NUMBER IS TO BE ENTERED THEN START THE GAME AGAIN.";




	delay(2000);


	getch();
	cleardevice();


	setcolor(WHITE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy-50,22);
	setfillstyle(SOLID_FILL,RED);
	floodfill(midx,midy-50,WHITE);
	setcolor(BLUE);
	outtextxy(midx,midy-50,"WAIT");
	delay(2000);
	graphdefaults();
	cleardevice();
	setcolor(WHITE);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy,20);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-18,midy-3,"READY");

	delay(2000);
	cleardevice();
	graphdefaults();
	cleardevice();
	setcolor(WHITE);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy,20);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-20,midy-30,"GO.....");
	delay(1000);
//while(again=='y')
printf("\nSELECT FOR PLAYER");
printf("\nPRESS 1 FOR 1st PLAYER");
printf("\nPRESS 2 FOR 2nd PLAYER");
printf("\nENTER YOUR CHOICE=");
scanf("%d",&choice);
clrscr();
printf("\nENTER THE 1st PLAYER NAME=");
cin>>pl1;
printf("\n");
printf("\nENTER YOUR AMOUNT=");
scanf("%d",&amount1);
printf("\n");
printf("\n");
printf("\nENTER THE 2nd PLAYER NAME=");
cin>>pl2;
printf("\n");
printf("\nENTER HER AMOUNT=");
scanf("%d",&amount2);
printf("\nPRESS ANY KEY TO CONTINOUE");
getch();
clrscr();
switch(choice)
{
case 1:
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("\nENTER THE  %d ROW NUMBERS =",i+1);
scanf("%d",&p1[i][j]);
clrscr();
}
getch();
}
clrscr();
do
{
printf("\nYOUR NUMBERS=");
for(i=0;i<5;i++)
{printf("\n");
for(j=0;j<5;j++)
{
//printf("\n");
printf("  %d  ",p1[i][j]);
}
}
getch();
if(c==1)
printf(" R ");
else if(c==2)
printf(" A ");
else if(c==3)
printf(" E ");
else if(c==4)
printf(" E ");
else if(c==5)
z1=exi1();
if(z1==1)
exit(0);
printf("\n");
printf("\n");
printf("\nnow enter the number to be deleted = ");
scanf("%d",&n);
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(n==p1[i][j])
p1[i][j]=0;
}
}
if(r1==0)
{
if(p1[0][0]==0&&p1[0][1]==0&&p1[0][2]==0&&p1[0][3]==0&&p1[0][4]==0)
{ c+=1;
  r1=2;
}
}
if(r2==0)
{
if(p1[1][0]==0&&p1[1][1]==0&&p1[1][2]==0&&p1[1][3]==0&&p1[1][4]==0)
{c+=1;
r2=1;
}
}
if(r3==0)
{if(p1[2][0]==0&&p1[2][1]==0&&p1[2][2]==0&&p1[2][3]==0&&p1[2][4]==0)
{
c+=1;
r3=1;
}
}
if(r4==0)
{
if(p1[3][0]==0&&p1[3][1]==0&&p1[3][2]==0&&p1[3][3]==0&&p1[3][4]==0)
{
c+=1;
r4=1;
}
}
if(r5==0)
{
if(p1[4][0]==0&&p1[4][1]==0&&p1[4][2]==0&&p1[4][3]==0&&p1[4][4]==0)
{
c+=1;
r5=1;
}
}
if(c1==0)
{
if(p1[0][0]==0&&p1[1][0]==0&&p1[2][0]==0&&p1[3][0]==0&&p1[4][0]==0)
{
c+=1;
c1=1;
}
}
if(c2==0)
{
if(p1[0][1]==0&&p1[1][1]==0&&p1[2][1]==0&&p1[3][1]==0&&p1[4][1]==0)
{
c+=1;
c2=1;
}
}
if(c3==0)
{
if(p1[0][2]==0&&p1[1][2]==0&&p1[2][2]==0&&p1[3][2]==0&&p1[4][2]==0)
{
c+=1;
c3=1;
}
}
if(c4==0)
{
if(p1[0][3]==0&&p1[1][3]==0&&p1[2][3]==0&&p1[3][3]==0&&p1[4][3]==0)
{
c+=1;
c4=1;
}
}
if(c5==0)
{
if(p1[0][4]==0&&p1[1][4]==0&&p1[2][4]==0&&p1[3][4]==0&&p1[4][4]==0)
{
c+=1;
c5=1;
}
}
if(d1==0)
{
if(p1[0][0]==0&&p1[1][1]==0&&p1[2][2]==0&&p1[3][3]==0&&p1[4][4]==0)
{
c+=1;
d1=1;
}
}
if(d2==0)
{
if(p1[0][4]==0&&p1[1][3]==0&&p1[2][2]==0&&p1[3][1]==0&&p1[4][0]==0)
{
c+=1;
d2=1;
}
}
}while(c<=5);
break;
case 2:
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{printf("\nENTER THE  %d ROW NUMBERS =",i+1);
scanf("%d",&p1[i][j]);
clrscr();
}
getch();
}
clrscr();
do
{
printf("\nYOUR NUMBERS=");
for(i=0;i<5;i++)
{
printf("\n");
for(j=0;j<5;j++)
{//printf("\n");
printf("  %d ",p1[i][j]);
}
}
getch();
if(c==1)
printf(" R ");
else if(c==2)
printf(" A ");
else if(c==3)
printf(" E ");
else if(c==4)
printf(" E ");
else if(c==5)
z2=exi2();
if(z2==1)
exit(0);
printf("\n");
printf("\n");
printf("\nnow enter the number to be deleted = ");
scanf("%d",&n);
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(n==p1[i][j])
p1[i][j]=0;
}
}
if(r1==0)
{
if(p1[0][0]==0&&p1[0][1]==0&&p1[0][2]==0&&p1[0][3]==0&&p1[0][4]==0)
{ c+=1;
 r1=2;
 }
}
if(r2==0)
{
if(p1[1][0]==0&&p1[1][1]==0&&p1[1][2]==0&&p1[1][3]==0&&p1[1][4]==0)
{c+=1;
r2=1;
}
}
if(r3==0)
{if(p1[2][0]==0&&p1[2][1]==0&&p1[2][2]==0&&p1[2][3]==0&&p1[2][4]==0)
{
c+=1;
r3=1;
}
}
if(r4==0)
{
if(p1[3][0]==0&&p1[3][1]==0&&p1[3][2]==0&&p1[3][3]==0&&p1[3][4]==0)
{
c+=1;
r4=1;
}
}
if(r5==0)
{
if(p1[4][0]==0&&p1[4][1]==0&&p1[4][2]==0&&p1[4][3]==0&&p1[4][4]==0)
{
c+=1;
r5=1;
}
}
if(c1==0)
{
if(p1[0][0]==0&&p1[1][0]==0&&p1[2][0]==0&&p1[3][0]==0&&p1[4][0]==0)
{
c+=1;
c1=1;
}
}
if(c2==0)
{
if(p1[0][1]==0&&p1[1][1]==0&&p1[2][1]==0&&p1[3][1]==0&&p1[4][1]==0)
{
c+=1;
c2=1;
}
}
if(c3==0)
{
if(p1[0][2]==0&&p1[1][2]==0&&p1[2][2]==0&&p1[3][2]==0&&p1[4][2]==0)
{
c+=1;
c3=1;
}
}
if(c4==0)
{
if(p1[0][3]==0&&p1[1][3]==0&&p1[2][3]==0&&p1[3][3]==0&&p1[4][3]==0)
{
c+=1;
c4=1;
}
}
if(c5==0)
{
if(p1[0][4]==0&&p1[1][4]==0&&p1[2][4]==0&&p1[3][4]==0&&p1[4][4]==0)
{
c+=1;
c5=1;
}
}
if(d1==0)
{
if(p1[0][0]==0&&p1[1][1]==0&&p1[2][2]==0&&p1[3][3]==0&&p1[4][4]==0)
{
c+=1;
d1=1;
}
}
if(d2==0)
{
if(p1[0][4]==0&&p1[1][3]==0&&p1[2][2]==0&&p1[3][1]==0&&p1[4][0]==0)
{
c+=1;
d2=1;
}
}
}while(c<=5);
break;
default:printf("\nWRONG!CHOICE \n press either 1 or 2");
}
}
//cout<<"\ndo you wants to play it again(y/n) ";
//scanf("%c",&again);

getch();
int exi1()
{
clrscr();
printf("********RAEES********");
amount1=amount1+amount2;
printf("\n****CONGRATULATION YOU WON THIS GAME**** ");
cout<<"\n2nd PLAYER ";cout<<pl2<<"WILL LOSS THIS GAME.";
printf("\nYOUR TOTAL AMOUNT IS=%d",amount1);
cout<<"\n @ @ @ @ @ @           @         |~~~~~~~~ |~~~~~~~~  ***********		" ;
cout<<"\n @         @ 	       @ @        |         | 	       *         *  "		 ;
cout<<"\n @         @ 	      @	  @ 	  |         |	       *	";
cout<<"\n @	   @         @	   @	  |	    | 	       *	";
cout<<"\n @ @ @ @  	    @@@@@@@@@	  |~~~~~    |~~~~~     ***********		";
cout<<"\n @   @	  	   @         @	  |	    |               	 * 	";
cout<<"\n @    @	  @           @	  |	    |	       		 *	";
cout<<"\n @      @	 @             @  |	    |  		   	 *	 ";
cout<<"\n @        @	@     	        @ |         |          *  	 * " ;
cout<<"\n @          @        		 @ ~~~~~~    ~~~~~~~~  ***********			";
getch();
clrscr();
cout<<"\n ";
cout<<"\n ";
cout<<"\n ";
//cout<<"\nWants To Play It Again(y/n) ";
//gets(again);
getch();
return 1;
}
int exi2()
{
clrscr();
printf("********RAEES********");
amount2=amount1+amount2;
printf("\n****CONGRATULATION YOU WON THIS GAME**** ");
cout<<"\n 1st PLAYER ";cout<<pl1<<"WILL LOSS THIS GAME.";
cout<<pl1;
printf("\nYOUR TOTAL AMOUNT IS=%d",amount2);
cout<<"\n @ @ @ @ @ @           @         |~~~~~~~~ |~~~~~~~~  ***********		" ;
cout<<"\n @         @ 	       @ @        |         | 	       *         *  "		 ;
cout<<"\n @         @ 	      @	  @ 	  |         |	       *	";
cout<<"\n @	   @         @	   @	  |	    | 	       *	";
cout<<"\n @ @ @ @  	    @@@@@@@@@	  |~~~~~    |~~~~~     ***********		";
cout<<"\n @   @	  	   @         @	  |	    |               	 * 	";
cout<<"\n @    @	  @           @	  |	    |	       		 *	";
cout<<"\n @      @	 @             @  |	    |  		   	 *	 ";
cout<<"\n @        @	@     	        @ |         |          *  	 * " ;
cout<<"\n @          @        		 @ ~~~~~~    ~~~~~~~~  ***********			";
getch();
clrscr();
cout<<"\n ";
cout<<"\n ";
cout<<"\n ";
//cout<<"\nWants To Play It Again(y/n) ";
//gets(again);
getch();
return 1;
}