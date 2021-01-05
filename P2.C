#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{ int gd=DETECT,gmode,i,pts[]={5,400,50,300,90,340,5,400};
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI");
  outtext("Dimensions of display : ");
  gotoxy(25,1);
  printf("%d x %d",getmaxx(),getmaxy());
  outtextxy(1,35,"Designs made by setfillstyle(), setcolor(), floodfill() and ...");
  outtextxy(1,70,"i) circle() :-");
  for(i=0;i<13;i++)
  { setfillstyle(13-i,i);
    setcolor(i);
    circle(i*50,120,30);
    floodfill(i*50,120,i);
    delay(250);
  }
  setcolor(15);
  outtextxy(1,180,"ii) fillellipse() :-");
  for(i=0;i<13;i++)
  { setfillstyle(i,15-i);
    setcolor(i);
    fillellipse(i*50,230,35,25+i*2);
    delay(200);
  }
  setcolor(15);
  outtextxy(1,280,"iii) fillpoly :-");
  for(i=0;i<12;i++)
  { setfillstyle(15-i,i+1);
    setcolor(13-i);
    fillpoly(4,pts);
    pts[6]=pts[0]=pts[0]+50;
    pts[2]=pts[2]+50;
    pts[4]=pts[4]+50;
    delay(150);
  }
  setcolor(15);
  outtextxy(1,420,"Press any key to goto next slide...");
  getch();
  cleardevice();
  settextstyle(1,0,1);
  for(i=0;i<10;i++)
  { setbkcolor(i);
    outtextxy(100,175,"Changing backgroud color using setbkcolor()");
    delay(700);
  }
  setbkcolor(4);
  gotoxy(48,15);
  outtextxy(190,217,"Color code of text : ");
  printf("%d",getcolor());
  outtextxy(20,400,"Press any key to goto next slide...");
  getch();
  cleardevice();
  setbkcolor(0);
  setcolor(1);
  setlinestyle(0,0,3);
  line(1,10,getmaxx(),10);
  settextstyle(0,0,2);
  outtextxy(20,20,"Font Styles :-");
  settextstyle(0,0,2);
  outtextxy(360,20,"Line Styles :-");
  settextstyle(0,1,2);
  outtextxy(370,58,"5 Line Styles");
  setlinestyle(0,0,3);
  line(1,45,getmaxx(),45);
  setlinestyle(0,0,1);
  line(340,10,340,275);
  line(380,45,380,275);
  line(500,275,500,420);
  line(340,275,getmaxx(),275);
  line(1,420,getmaxx(),420);
  for(i=0;i<11;i++)
  { setcolor(i+1);
    settextstyle(i,0,1);
    outtextxy(20,65+30*i,"Font styled using settextstyle()");
    delay(250);
  }
  for(i=0;i<5;i++)
  { setcolor(4);
    if(i<4)
    { setlinestyle(i,0,3);
      line(420+i*40,70,420+i*40,260);
    }
    else
    { setlinestyle(i,1,3);
      line(420+i*40,70,420+i*40,260);
    }
    delay(250);
  }
  settextstyle(0,0,1);
  outtextxy(520,310,"Press any");
  outtextxy(520,340,"key to");
  outtextxy(520,370,"Exit...");
  getch();
  closegraph();
}