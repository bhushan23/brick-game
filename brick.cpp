/*
BhUSHAN SoNAWANE
BS
BrICK GaME
*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
int getkey();
void invisible();
void bomb_blasts();
void main()
{
start:
time_t t;
int spe,ar,xc,j,yc,xr=0,yr=195,a=1,b=1,c=0,are;

int X=0,Y=0,s,area1,si,bs=1;


int gd,gm,level,speed,re,i,b_int;
FILE *fp;
gd=DETECT;

initgraph(&gd,&gm,"..//BGI ");
char user[100],l[5];

/*
 setfillstyle(1,BLUE);
bar(0,0,getmaxx(),getmaxy());
printf("\n%d",getpixel(10,10));
getchar();
*/
//input menu
cleardevice();
outtextxy(1,1,"plz enter level u want to play 1,2,3");
l[0]=getch();
outtextxy(1,20,l);
level=l[0]-48;
printf("\nlevel %d",level);
getchar();
void *bomb;
//fp=fopen("data","w");
//fprintf(fp,"\n%s",user);
//bomb
rectangle(0,0,50,25);
setfillstyle(1,YELLOW);
floodfill(2,2,15);
b_int=imagesize(0,0,50,25);
bomb=malloc(b_int);
getimage(0,0,50,25,bomb);

cleardevice();
gotoxy(1,1);
void *bu,*buf;
void *buff1,*steel;
void *spp;
//green bricks
rectangle(0,0,50,25);
setfillstyle(1,GREEN);
floodfill(2,2,15);
spe=imagesize(0,0,50,25);
spp=malloc(spe);
getimage(0,0,50,25,spp);
//putimage(0,0,spp,XOR_PUT);
  						//g bricks ends
rectangle(0,0,50,25);
setfillstyle(6,6);
floodfill(2,2,15);
ar=imagesize(0,0,50,25);
bu=malloc(ar);
getimage(0,0,50,25,bu);
putimage(0,0,bu,XOR_PUT);
rectangle(0,0,50,25);
setfillstyle(6,8);
floodfill(2,2,15);
are=imagesize(0,0,50,25);
buf=malloc(are);
getimage(0,0,50,25,buf);
putimage(0,0,buf,XOR_PUT);
cleardevice();

if(level<4) {
for( j=0;j<180;j+=27)
 for( i=0;i<600;i+=52)
{
if(i==104&&j==54)
{
putimage(0+i,27+j,bomb,XOR_PUT);
//putimage(0,27,bomb,XOR_PUT);
//putimage(572,27,bomb,XOR_PUT);
//putimage(0,27,buf,XOR_PUT);
//putimage(572,27,buf,XOR_PUT);
}

else if(i>0&&j>0&&i*rand()%100==0)
{
putimage(0+i,27+j,spp,XOR_PUT);
putimage(0,27,spp,XOR_PUT);
putimage(572,27,spp,XOR_PUT);
putimage(0,27,buf,XOR_PUT);
putimage(572,27,buf,XOR_PUT);

}
else {
putimage(0+i,27+j,bu,XOR_PUT);
putimage(0,27,bu,XOR_PUT);
putimage(572,27,bu,XOR_PUT);
putimage(0,27,buf,XOR_PUT);
putimage(572,27,buf,XOR_PUT);
}     }
if(level==2)
{
srand(time(&t));
//steel starts
si=random(100);
rectangle(si,300,si+200,320);
setfillstyle(1,RED) ;
floodfill(si+10,310,15);
steel=malloc(re);

//getimage(si,300,si+200,320,steel);
//putimage(0,0,steel,XOR_PUT);
//steel ends
							for(i=si;i<(si+200);i+=4)
		{
		putpixel(i,303,BLACK);
		putpixel(i,317,BLACK);
		 }
							}
}

setcolor(3);
rectangle(80,445,159,452);
setfillstyle(1,1);
floodfill(82,447,3);
area1=imagesize(80,445,159,452);
buff1=malloc(area1);
getimage(80,445,159,452,buff1);

setcolor(4);
line(0,479,640,479);

		int area,x=325,y=325,ch,xdirn=-1,ydirn=-1,step;
		int maxx,maxy;
		void *buff;

		setcolor(WHITE);
		setfillstyle(SOLID_FILL,RED);
		circle(350,350,5);
		floodfill(350,350,WHITE);
		area=imagesize(345,345,355,355);
		buff=malloc(area);
		getimage(345,345,355,355,buff);
		putimage(345,345,buff,XOR_PUT);


	speed=16;
	while (1)
	{
	if(level==3)
{
		invisible();
		if(y<getmaxy()/2+50||y>getmaxy()-60)
		 {
		putimage(x, y, buff, XOR_PUT);
		delay(speed);
		putimage(x, y, buff, XOR_PUT);
		}
					else
					delay(speed);
		}
		else if(level==1||level==2)
		{
		putimage(x, y, buff, XOR_PUT);
		delay(speed);
		putimage(x, y, buff, XOR_PUT);
		}
		else
	 {
		cout<<"\nthis level is under construction";
	 getchar();
	 break;
	 //	cout<<"plz selsect correct level";
	 }
		x=x+(xdirn*2);
		y=y+(ydirn*3);

		if ( x + 10 - 1 > 640 )
		 {
			 xdirn*=-1;
			 x = 640 - 10 + 1;
		 }
		if (x < 0)
		 {
			 xdirn*=-1;
			 x = 0;
		 }
		if ( y + 10 - 1 > 470 )
		 {
//       ydirn*=-1;
//       y = 470 - 10 + 1;

			 cleardevice();
			 settextstyle(1,0,4);
			 outtextxy(100,200,"Sorry! You loose the game.");
			 outtextxy(150,240,"Type 't' to Try Again!!!");
			 gotoxy(30,8);
			 cout<<"Total Score : "<<c;
if(getchar()=='t') {
			free(bu);
		free(buff);
		free(buff1);
		closegraph();
			goto start;
			}
			else
			 goto tt;
		 }
		if(c==1020)
		{
			 outtextxy(180,200,"Congrats! You have finished thegame.");
			 gotoxy(30,8);
			 cout<<"Total Score : "<<c;
			 delay(5000);
			 getch();
			 goto tt;
		 }

		if ( getpixel(x,y)==1 )
		 {
			 sound(500);
			 delay(15);
			 nosound();
			 ydirn*=-1;
			 xc=x;
			 yc=y;
			 a=xc/52;
			 b=(yc/27);
			 xr=a*52;
			 yr=b*27;

		 }
		if (getpixel(x,y)==6)
		 {
			 sound(100);
			 delay(50);
			 nosound();
			 ydirn*=-1;
			 xc=x;
			 yc=y;
			 a=xc/52;
			 b=(yc/27);
			 xr=a*52;
			 yr=b*27;
			 putimage(xr,yr,bu,XOR_PUT);
			 c+=10;
		 }
			if (getpixel(x,y)==RED)
		 {
			 sound(100);
			 delay(50);
			 nosound();
			 ydirn*=-1;
			 xc=x;
			 yc=y;
			 a=xc/52;
			 b=(yc/27);
			 xr=a*52;
			 yr=b*27;
			// putimage(xr,yr,steel,XOR_PUT);

		 } //bomb
			if (getpixel(x,y)==YELLOW)
		 {
			 sound(400);
			 delay(50);
			 nosound();

		 bomb_blasts();
			setcolor(RED);
			settextstyle(1,0,4);
			 outtextxy(40,40,"BLAST.....");
				setcolor(BLUE);

				outtextxy(150,240,"Type 't' to Try Again!!!");

		 if(getchar()=='t')
		 goto start;
		 else
		 goto tt;
		 }

		 if(getpixel(x,y+3)==2)
		 {
			 sound(100);
			 delay(50);
			 nosound();
			 ydirn*=-1;
			 xc=x;
			 yc=y;
			 a=xc/52;
			 b=(yc/27);
			 xr=a*52;
			 yr=b*27;
			 putimage(xr,yr,spp,XOR_PUT);
			 speed-=2;
			 bs++;
			// c+=10;
		 gotoxy(1,1);
		 cout<<"speed: "<<bs<<"x";
		}
		if (getpixel(x,y-3)==8)
		 {
			 sound(800);
			 delay(200);
			 nosound();
			 ydirn*=-1;
			 xc=x;
			 yc=y;
			 a=xc/52;
			 b=(yc/27);
			 xr=a*52;
			 yr=b*27;
			 putimage(xr,yr,buf,XOR_PUT);
			 c+=100;
		 }

		if( y < 0 )
		 {
			ydirn*=-1;
			y=0;
		 }
		gotoxy(65,1);
		cout<<"SCORE : "<<c;
		fprintf(fp,"  score %d",c);
//		cout<<"last users";
		fclose(fp);

if( kbhit() )
{
 s=getkey();
 if(s!=1)
 {
	 if(X>480)
		{
	X=480;
	putimage(160+X,445+Y,buff1,XOR_PUT);
		}
	 if(X<-80)
		{
	X=-80;
	putimage(80+X,445+Y,buff1,XOR_PUT);
		}
	 putimage(80+X,445+Y,buff1,XOR_PUT);
//if(s==72)
// Y+=-40;
	 if(s==75)
	X+=-40;
//if(s==80)
// Y+=40;
	 if(s==77)
	X+=40;
	 putimage(80+X,445+Y,buff1,XOR_PUT);
//cout<<X;
	}
	if(s==1)
	{
tt: free(bu);
		free(buff);
		free(buff1);
		closegraph();
	}
 }
}
}
int getkey()
{
union REGS j,s;
j.h.ah=0;
int86(22,&j,&s);
return(s.h.ah);
}
void invisible()
{

//	setfillstyle(1,);
		rectangle(1,getmaxy()/2+50,getmaxx()-2,getmaxy()-60);
}
void bomb_blasts()
{
int midx,midy,i;
midx=getmaxx()/2;
midy=getmaxy()/2;
int a,b,c,d,e,g,h,l,m,n,q,r,o;
a=midx;b=midy-80;c=midx-40;d=midy-20;
e=midx+40;
g=midx-80;h=midy;l=midx+80;m=midx+40;
n=midy+80;o=midy+20;
q=midy+80;r=midy+20;
for( i=0;i<midx;i++)
{

line(a/*midx*/,b/*midy-80*/,c/*midx-40*/,d/*midy-20*/);
line(a,b,e/*midx+40*/,d);
line(g/*midx-80*/,h/*midy*/,c,d);
line(l/*midx+80*/,h,m/*midx+40*/,d);

line(a,n/*midy+80*/,m,o/*midy+20*/);
line(a,q/*midy+80*/,c,r/*midy+20*/);
line(l,h,m,o);
line(g,h,c,o);
a--;b--;c--;d--;
e++;g--;h++;l++;m++;n++;r++;
											setfillstyle(1,RED) ;
floodfill(midx,midy,15);
delay(20);
 }

}
