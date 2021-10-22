#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{ int pts[]={320,150,400,250,250,350,320,150}; 
  int gd=DETECT,gmode,color,maxx,maxy; //Variable declaration
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI"); 
  maxx=getmaxx(); 
  maxy=getmaxy(); 
  printf("\nDimensions of the canvas is %d X %d .",maxx,maxy);
  printf("\n\nDrawing a circle :-");
  circle(100,130,50); //Drawing the circle at (100,100) of radius 50 pixels
  putpixel(100,130,GREEN); //Marking centre of circle white
  color=getpixel(100,130); //Getting the color of the pixel at (100,100)
  printf("\n\n\n\n\n\n\n\n\ngetpixel(100,130) = %d",color);
  line(0,220,maxx,220); //Horizontal line
  line(320,45,320,maxy-80); //Verticle line
  printf("\n\n\nDrawing a line :-");
  line(30,280,220,380); //Drawing a line
  gotoxy(42,4); //Placing cursor
  maxx=getmaxx();
  printf("Drawing a line usng 'lineto' :-");
  moveto(540,85); //Moving to the location
  lineto(350,180); //Drawing a line fron cursor location to (350,180)
  gotoxy(42,16); //Putting cursor on the location
  printf("Drawing a Arc :-");
  arc(400,400,15,120,100); //Drawing a arc
  gotoxy(1,25); //Putting cursor on the location
  printf("\n\nPress any key to goto next screen...");
  getch(); //Pause to get user input
  maxx=getmaxx();
  cleardevice(); //Clearing screen
  line(0,220,maxx,220); //Horizontal line
  line(320,30,320,maxy-80); //Vertical line
  gotoxy(1,3); //Placing cursor on new location
  printf("Drawing a Pieslice :-");
  pieslice(100,200,20,120,120); //Drawing a Pieslice
  gotoxy(42,3); //Placing cursor on new location
  printf("Drawing a Ellipse :-");
  maxx=getmaxx();
  ellipse(450,130,0,300,100,50); //Drawing a Ellipse
  gotoxy(1,16); //Placing cursor on new location
  printf("Drawing a Sector :-");
  sector(75,375,15,60,200,100); //Drawing a Sector
  gotoxy(42,16); //Placing cursor on new location
  printf("Drawing a Rectangle :-");
  rectangle(360,280,540,380); //Drawing a rectangle
  gotoxy(1,25); //Placing cursor on new location
  printf("\n\nPress any key to goto next screen...");
  getch(); //Pause to get user input
  cleardevice(); //Clearing screen
  maxx=getmaxx();
  gotoxy(1,6); //Placing cursor on a new location
  printf("Drawing a Polygon :-");
  drawpoly(4,pts); //Draw a polygon
  gotoxy(1,25); //Placing cursor on a new location
  printf("\n\nPress any key to End Program ...");
  getch(); //Pause to get the user input
  closegraph(); 
}
