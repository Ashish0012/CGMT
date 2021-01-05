#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int factor,x1,x2,y1,y2,mx,my,depth;
float i;

void frame()
{ outtextxy(200,12,"-: 3D Translation & Scaling :-");
  line(0,0,getmaxx(),0);
  line(0,0,0,getmaxy());
  line(0,getmaxy(),getmaxx(),getmaxy());
  line(getmaxx(),0,getmaxx(),getmaxy());
  line(0,30,getmaxx(),30);
  line(0,450,getmaxx(),450);
}

void pause()
{ outtextxy(10,460,"Press any key to Continue ...");
  getch();
}

void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  frame();
  bar3d(50,50,150,150,25,1);
  pause();
  for(i=100;i<151;i=i+1)
  { frame();
    outtextxy(10,435,"Scaling to 1.5x ...");
    bar3d(50*(i/100),50*(i/100),150*(i/100),150*(i/100),25*(i/100),1);
    delay(46);
    cleardevice();
  }
  frame();
  bar3d(50*(i/100),50*(i/100),150*(i/100),150*(i/100),25*(i/100),1);
  outtextxy(10,435,"Scaled to 1.5x ...");
  pause();
  for(i=0;i<251;i=i+1)
  { frame();
    outtextxy(10,435,"Translating to dx = 250 ...");
    bar3d(75+i,75,225+i,225,37,1);
    delay(23);
    cleardevice();
  }
  frame();
  outtextxy(10,435,"Translated to dx = 250 ...");
  bar3d(75+i,75,225+i,225,37,1);
  pause();
  for(i=0;i<201;i=i+1)
  { frame();
    outtextxy(10,435,"Translating to dy = 200 ...");
    bar3d(325,75+i,475,225+i,37,1);
    delay(23);
    cleardevice();
  }
  frame();
  outtextxy(10,435,"Translated to dy = 200 ...");
  bar3d(325,75+i,475,225+i,37,1);
  pause();
  for(i=0;i<101;i=i+1)
  { frame();
    outtextxy(10,435,"Translating to dx = 100 & dy = 100 ...");
    bar3d(325-i,275-i,475-i,425-i,37,1);
    delay(46);
    cleardevice();
  }
  frame();
  outtextxy(10,435,"Translated to dx = 100 & dy = 100 ...");
  bar3d(325-i,275-i,475-i,425-i,37,1);
  outtextxy(10,460,"Press any key to Exit ...");
  getch();
  closegraph();
}