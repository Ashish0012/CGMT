#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{ int gd=DETECT,gm,i=0;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  for(i=0;i<100;i=i+2)
  { if(i==98)
    { setlinestyle(0,0,3);
      setfillstyle(1,6);
      floodfill(3,3,15);
      setcolor(0);
    }
    //frame
    line(1,1,getmaxx(),1);
    line(1,1,1,getmaxy());
    line(getmaxx(),1,getmaxx(),getmaxy());
    line(1,440,getmaxx(),440);
    line(1,60,getmaxx(),60);

    //aquarium
    //stones
    ellipse(100,425,0,360,20,13);
    ellipse(150,430,0,360,30,10);
    ellipse(200,430,0,360,20,10);
    ellipse(250,425,0,360,20,15);
    ellipse(180,415,0,360,15,10);
    ellipse(219,411,0,360,15,15);
    ellipse(300,420,0,360,15,20);
    ellipse(335,425,0,360,20,15);
    ellipse(390,430,0,360,30,10);
    ellipse(435,425,0,360,15,15);
    ellipse(368,412,0,360,15,10);
    ellipse(268,404,0,360,20,10);
    ellipse(500,420,0,360,50,20);
    ellipse(580,425,0,360,30,15);
    ellipse(625,424,0,360,15,16);
    ellipse(602,396,0,360,25,15);
    ellipse(553,404,0,360,12,10);
    ellipse(630,375,0,360,10,20);
    ellipse(566,385,0,360,15,10);
    ellipse(585,372,0,360,12,10);
    ellipse(608,360,0,360,12,22);
    ellipse(630,347,0,360,10,6);

    //oxygen
    rectangle(1,300,80,440);
    rectangle(80,320,100,350);
    rectangle(20,20,40,300);
    circle(120,330-i,10);
    circle(130,260-i,10);
    circle(135,170-i,10);

    if(i>50)
    { circle(120,380-i,10); }

    line(1,1,getmaxx(),1);
    line(1,1,1,getmaxy());
    line(getmaxx(),1,getmaxx(),getmaxy());
    line(1,440,getmaxx(),440);

    //fish
    line(400-i,230+i/3,455-i,245+i/3);
    line(350-i,280+i/3,400-i,230+i/3);
    line(380-i,250+i/3,435-i,255+i/3);
    line(455-i,245+i/3,465-i,265+i/3);
    line(435-i,255+i/3,500-i,275+i/3);
    line(350-i,280+i/3,355-i,295+i/3);
    line(355-i,295+i/3,365-i,295+i/3);
    line(355-i,295+i/3,365-i,305+i/3);
    line(365-i,305+i/3,430-i,308+i/3);
    line(430-i,308+i/3,500-i,275+i/3);
    line(430-i,308+i/3,455-i,315+i/3);
    line(455-i,315+i/3,475-i,303+i/3);
    line(475-i,303+i/3,470-i,286+i/3);
    line(395-i,305+i/3,403-i,320+i/3);
    line(403-i,320+i/3,415-i,328+i/3);
    line(415-i,328+i/3,420-i,320+i/3);
    line(420-i,320+i/3,415-i,308+i/3);
    line(470-i,266+i/3,535-i,250+i/3);
    line(535-i,250+i/3,515-i,276+i/3);
    line(515-i,276+i/3,525-i,305+i/3);
    line(525-i,305+i/3,485-i,282+i/3);
    line(380-i,250+i/3,400-i,272+i/3);
    line(400-i,272+i/3,375-i,306+i/3);
    line(400-i,272+i/3,415-i,270+i/3);
    line(415-i,270+i/3,430-i,278+i/3);
    line(430-i,278+i/3,420-i,294+i/3);
    line(420-i,294+i/3,385-i,292+i/3);
    circle(375-i,270+i/3,5);

    circle(330,280-i,5);

    if(i>30)
    { circle(300,310-i,5); }
    if(i>60)
    { circle(270,340-i,5); }
    if(i>80)
    { circle(240,380-i,5); }

    delay(75);

    if(i==98)
    { break; }
    cleardevice();
  }

  //colors
  //above water
  setfillstyle(9,7);
  floodfill(3,3,0);

  //water
  setfillstyle(9,9);
  floodfill(60,70,0);
  floodfill(5,70,0);
  //fish bubbles
  setfillstyle(1,9);
  floodfill(240,282,0);
  floodfill(270,242,0);
  floodfill(300,212,0);
  floodfill(330,182,0);
  //oxygen bubbles
  floodfill(120,232,0);
  floodfill(130,162,0);
  floodfill(135,72,0);
  floodfill(120,282,0);
  //oxygen bubble generator
  //pipe
  setfillstyle(6,7);
  floodfill(30,30,0);
  floodfill(30,70,0);
  //box
  setfillstyle(3,7);
  floodfill(30,320,0);
  setfillstyle(4,7);
  floodfill(90,330,0);
  //fish
  //eye
  setfillstyle(10,8);
  floodfill(277,302,0);
  //ufin
  setfillstyle(6,10);
  floodfill(320,270,0);
  //body
  setfillstyle(9,12);
  floodfill(330,290,0);
  //face
  setfillstyle(1,14);
  floodfill(260,312,0);
  //bodyfin
  setfillstyle(10,13);
  floodfill(302,310,0);
  //tail
  setfillstyle(6,1);
  floodfill(410,305,0);
  //lfinleft
  setfillstyle(6,4);
  floodfill(312,345,0);
  //lfinright
  setfillstyle(1,11);
  floodfill(370,325,0);
  //base
  setfillstyle(1,1);
  floodfill(30,470,0);
  //stones
  //lightgrey
  setfillstyle(1,7);
  floodfill(100,425,0);
  floodfill(180,415,0);
  floodfill(435,425,0);
  floodfill(625,424,0);
  floodfill(566,385,0);
  floodfill(608,360,0);
  //cayn
  setfillstyle(1,3);
  floodfill(150,430,0);
  floodfill(268,404,0);
  floodfill(553,404,0);
  floodfill(585,372,0);
  floodfill(250,425,0);
  floodfill(580,425,0);
  //red
  setfillstyle(1,4);
  floodfill(200,430,0);
  floodfill(219,411,0);
  floodfill(390,430,0);
  floodfill(500,420,0);
  //green
  setfillstyle(1,10);
  floodfill(335,435,0);
  floodfill(602,396,0);
  floodfill(630,347,0);
  //yellow
  setfillstyle(1,14);
  floodfill(630,375,0);
  floodfill(368,412,0);

  getch();
  closegraph();
}
