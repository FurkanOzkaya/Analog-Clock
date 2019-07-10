#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <time.h>

 
 int main ()
 {
 	initwindow(600,600,"Anolog_saat");
 	
 
    
    int koordinatX[12] = {50, 87, 100, 87, 50, 0, -50, -87, -100, -87, -50, 0};
    int koordinatY[12] = {-87, -50, 0, 50, 87, 100, 87, 50, 0, -50, -87, -100};
    
  
    
    int SaniyeveDakikaX[60] = {0, 18, 35, 53, 69, 85, 100, 114, 126, 138, 147, 155, 162, 166, 169, 170,
                                  169, 166, 162, 155, 147, 138, 126, 114, 100, 85, 69, 53, 35, 18, 0,
                                  -18, -35, -53, -69, -85, -100, -114, -126, -138, -147, -155, -162, -166, -169, -170,
                                  -169, -166, -162, -155, -147, -138, -126, -114, -100, -85, -69, -53, -35, -18};
                                  
    int SaniyeveDakikaY[60] = {-170, -169, -166, -162, -155, -147, -138, -126, -114, -100, -85, -69, -53, -35, -18, 0,
                                     18, 35, 53, 69, 85, 100, 114, 126, 138, 147, 155, 162, 166, 169, 170, 
                                     169, 166, 162, 155, 147, 138, 126, 114, 100, 85, 69, 53, 35, 18, 0,
                                     -18, -35, -53, -69, -85, -100, -114, -126, -138, -147, -155, -162, -166, -169};
 	
 	
 	
 	
 	
 	 
 	 time_t Szaman;	
 	 struct tm * simdikizaman;	
 	 char a[100];
 	

	 time_t t;
 	struct tm *zaman;
 	time(&t);
 	zaman=localtime(&t);
	 
	  
	  
	  
 	
	  int MerkezX =getmaxx()/2;
 	 int MerkezY=getmaxy()/2;
 	 
 	 int Sds;
 	 
 	 for(int i=1;  ;i++)
 	 {

 	 
 	 Szaman = time(NULL);
	 simdikizaman = localtime(&Szaman);
	 
	 
	 if(i%15==0)
	 {
	     i++;
	 }
	 setcolor (i%15);
	 
	 circle(MerkezX,MerkezY,200);
	 
	 outtextxy(MerkezX +90     ,MerkezY -170   ,"1");
	 outtextxy(MerkezX +160    ,MerkezY -100   ,"2");
	 outtextxy(MerkezX +185    ,MerkezY -7     ,"3");
	 outtextxy(MerkezX +158	   ,MerkezY +88    ,"4");
     outtextxy(MerkezX +90     ,MerkezY +155   ,"5");
     outtextxy(MerkezX -3      ,MerkezY +180   ,"6");
	 outtextxy(MerkezX -95     ,MerkezY +155   ,"7");
	 outtextxy(MerkezX -167    ,MerkezY +85    ,"8");
	 outtextxy(MerkezX -193	   ,MerkezY -7     ,"9");
	 outtextxy(MerkezX -170    ,MerkezY -98    ,"10");  
     outtextxy(MerkezX -100    ,MerkezY -170   ,"11");
     outtextxy(MerkezX -6      ,MerkezY -195   ,"12");
 	
	 
	  if(i%15==0)
	 {
	     i++;
	 }
 	 
	  
	  setcolor(i+1%15);
 	 
	  outtextxy(MerkezX-100,MerkezY+50,asctime(zaman));
 	 
 	
	strftime(a, 100, "%I", simdikizaman);
    sscanf(a, "%d", &Sds);
    setcolor(RED);
    line( MerkezX, MerkezY, MerkezX+koordinatX[Sds-1], MerkezY+koordinatY[Sds-1]);
    
    strftime(a, 100, "%M", simdikizaman);
    sscanf(a, "%d", &Sds);
    setcolor(YELLOW);
    line(MerkezX, MerkezY, MerkezX+SaniyeveDakikaX[Sds], MerkezY+SaniyeveDakikaY[Sds]);
    
    strftime(a, 100, "%S", simdikizaman);
    sscanf(a, "%d", &Sds);
    setcolor(BLUE);
    line(MerkezX, MerkezY, MerkezX+SaniyeveDakikaX[Sds], MerkezY+SaniyeveDakikaY[Sds]);
    
    delay(1000);
    cleardevice ();
    
}
 
 	getch ();
 	closegraph ();
    return 0;
 }
