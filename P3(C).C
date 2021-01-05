#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{ int gd=DETECT,gm,i,j,k;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for(j=0;j<440;j=j+2)
  { //frame
    line(1,1,getmaxx(),1);
    line(1,1,1,getmaxy());
    line(getmaxx(),1,getmaxx(),getmaxy());
    //line(1,440,getmaxx(),440);
    line(1,getmaxy(),getmaxx(),getmaxy());

    //road
    line(1,340,getmaxx(),340);
    line(1,380,getmaxx(),380);
    line(1,383,getmaxx(),383);
    for(i=0;i<4;i++)
    { line(50+(i*150),435,100+(i*150),435); }
    for(i=0;i<7;i++)
    { line(80+(i*80),340,80+(i*80),380); }

    //clouds
    ellipse(20,20,240,350,80,60);
    ellipse(150,15,180,340,60,30);
    ellipse(270,30,190,340,80,50); 
    ellipse(380,15,200,310,60,40);
    ellipse(485,25,180,320,75,50);
    ellipse(getmaxx(),1,200,270,60,70);
    ellipse(555,40,220,340,50,50);

    //man with umbrella
    circle(50+j,292,12);
    line(50+j,304,50+j,330);
    if(j>-1&&j<41)
    { line(50+j,330,30+j*2,360);
      line(50+j,330,70,360);
    }
    else if(j>40&&j<81)
    { line(50+j,330,110,360);
      line(50+j,330,70+(j-40)*2,360);
    }
    else if(j>80&&j<121)
    { line(50+j,330,110+(j-80)*2,360);
      line(50+j,330,150,360);
    }
    else if(j>120&&j<161)
    { line(50+j,330,190,360);
      line(50+j,330,150+(j-120)*2,360);
    }
    else if(j>160&&j<201)
    { line(50+j,330,190+(j-160)*2,360);
      line(50+j,330,230,360);
    }
    else if(j>200&&j<241)
    { line(50+j,330,270,360);
      line(50+j,330,230+(j-200)*2,360);
    }
    else if(j>240&&j<281)
    { line(50+j,330,270+(j-240)*2,360);
      line(50+j,330,310,360);
    }
    else if(j>280&&j<321)
    { line(50+j,330,350,360);
      line(50+j,330,310+(j-280)*2,360);
    }
    else if(j>320&&j<361)
    { line(50+j,330,350+(j-320)*2,360);
      line(50+j,330,390,360);
    }
    else if(j>360&&j<401)
    { line(50+j,330,430,360);
      line(50+j,330,390+(j-360)*2,360);
    }
    else
    { line(50+j,330,430+(j-400)*2,360);
      line(50+j,330,470,360);
    }
    line(50+j,310,75+j,310);
    line(74+j,265,74+j,310);
    for(i=0;i<5;i++)
    { ellipse(35+(i*20)+j,265,0,180,10,5); }
    sector(75+j,260,0,180,50,45);
    if(j>145&&j<290)
    { for(i=0;i<100;i++)
      { outtextxy(random(getmaxx()),random(getmaxy()),"/"); }
    }
    else
    { for(i=0;i<100;i++)
      { outtextxy(random(getmaxx()),random(getmaxy()),"|"); }
    }
    delay(33);
    if(j==438)
    { break; }
    cleardevice();
  }
  getch();
  closegraph();
}