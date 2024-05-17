#include<graphics.h>
#include<iostream>
#include<time.h>


using namespace std;
int main()
{
	int n=6,ts,ts0,tss=0,pbf=0,chnc,delv,target,wkc,run,run1=0,op,ball1=-1,wicket1=0,run2=0,ball2=-1,head=0,bat=0;
	char pl[50],opn[50],wck[50],runs[50],ball[50];
	srand(time(0));
	initwindow(900,700,"Hand Cricket");
	cleardevice();
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	POINT curPos;
	readimagefile("Deliveries.jpg",0,0,900,700);
	while(1)
	{
		
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			GetCursorPos(&curPos);
			if(curPos.x>199&&curPos.x<601&&curPos.y<201&&curPos.y>99)
			{
			
				delv=12;
				break;
			}
			else if(curPos.x>199&&curPos.x<601&&curPos.y<401&&curPos.y>299)
			{
				delv=30;
				break;
			}
			else if(curPos.x>199&&curPos.x<601&&curPos.y<601&&curPos.y>499)
			{
				delv=60;
				break;
		}
		}
	}
	cleardevice();
	readimagefile("Toss.jpg",0,0,900,700);
	while(1)
	{
	
	if(GetAsyncKeyState(VK_LBUTTON))
	{
		GetCursorPos(&curPos);
		if(curPos.x>299&&curPos.x<401&&curPos.y<501&&curPos.y>399)//head
		{
			head++;
			break;
		}
		if(curPos.x>499&&curPos.x<601&&curPos.y<501&&curPos.y>399)
		{
			
			break;
		}
	}
	}
	cleardevice();
	ts = rand()%2;
	if(ts==1)
	{
		readimagefile("Heads.jpg",0,0,900,700);
	}
	else if(ts==0)
	{
		readimagefile("Tails.jpg",0,0,900,700);
	}
	delay(1000);
	cleardevice();
	if(ts==head)
	{
		readimagefile("TossWin.jpg",0,0,900,700);
		while(1)
		{
		if(GetAsyncKeyState(VK_LBUTTON))
		{
		GetCursorPos(&curPos);
		if(curPos.x>199&&curPos.x<401&&curPos.y<601&&curPos.y>499)//Bat
		{
			bat++;
			pbf++;
			break;
		}
		if(curPos.x>499&&curPos.x<701&&curPos.y<601&&curPos.y>499)
		{
			
			break;
		}
		}
		
	
		}
		cleardevice();
	}
	if(ts==head&&bat==1)
	{
		readimagefile("BatFirstChoice.jpg",0,0,900,700);
		delay(2500);
		cleardevice();
	}
	else if(ts==head&&bat==0)
	{
		readimagefile("BowlFirstChoice.jpg",0,0,900,700);
		delay(2500);
		cleardevice();
	}
	ts0=rand()%2;
	if(ts!=head&&ts0==0)
	{
		readimagefile("OppoBat.jpg",0,0,900,700);
		delay(2500);
		cleardevice();
	}
	else if(ts!=head&&ts0==1)
	{
		pbf++;
		readimagefile("OppoBowl.jpg",0,0,900,700);
		delay(2500);
		cleardevice();
	}
	//1st innings
	while(1)
	{
	
		
		ball1++;
		if(ball1==delv)break;
		else if(wicket1==5)break;
		op=rand()%3;
		chnc=rand()%10;
		if(chnc>2)
		op+=4;
		else if(chnc<=2)
		op+=1;
	
	readimagefile("Choice.jpg",0,0,900,700);
	sprintf(runs,"Runs: %d",run1);
	outtextxy(100,100,runs);
	sprintf(wck,"Wickets: %d",wicket1);
	outtextxy(500,100,wck);
	sprintf(ball,"Balls: %d",ball1);
	outtextxy(100,200,ball);
	if(pbf==1)outtextxy(100,50,"Batting now: Player");
	else outtextxy(100,50,"Batting now: Opponent");
	run=0;
	while(1)
	{
	
		
	
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			
			
			GetCursorPos(&curPos);
			
			if(curPos.x>199&&curPos.x<301&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=1;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>399&&curPos.x<501&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=2;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;
			
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>599&&curPos.x<701&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=3;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
	
			
			else if(curPos.x>199&&curPos.x<301&&curPos.y<601&&curPos.y>499)
			{
			
			
				run+=4;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>399&&curPos.x<501&&curPos.y<601&&curPos.y>499)
			{
			
			
				run+=5;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>599&&curPos.x<701&&curPos.y<601&&curPos.y>499)
			{
			
				run+=6;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==1)run1+=run;
				else if(pbf==0)run1+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		}
		
}	
}
cleardevice();
readimagefile("1stEnd.jpg",0,0,900,700);
target=run1+1;
char trgt[50];
sprintf(runs,"1st Innings runs: %d",run1);
outtextxy(50,50,runs);
sprintf(trgt,"Target :%d",target);
outtextxy(50,100,trgt);
delay(5000);
cleardevice();
wicket1=0;
//2nd innings
while(1)
		{
		
		
		ball2++;
		if(ball2==delv)break;
		else if(target<=run2)break;
		else if(wicket1==5)break;
		op=rand()%3;
		chnc=rand()%10;
		if(chnc>2)
		op+=4;
		else if(chnc<=2)
		op+=1;
	
		readimagefile("Choice.jpg",0,0,900,700);
		sprintf(runs,"Runs: %d",run2);
		outtextxy(100,100,runs);
		sprintf(wck,"Wickets: %d",wicket1);
		outtextxy(500,100,wck);
		sprintf(ball,"Balls: %d",ball2);
		outtextxy(100,200,ball);
		outtextxy(500,200,trgt);
		if(pbf==0)outtextxy(100,50,"Batting now: Player");
		else outtextxy(100,50,"Batting now: Opponent");
		run=0;
	while(1)
	{
	
		
	
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			
			
			GetCursorPos(&curPos);
			
			if(curPos.x>199&&curPos.x<301&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=1;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
				//sprintf(wck,"Wickets: %d",wicket1);
				//outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>399&&curPos.x<501&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=2;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;
			
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
				//sprintf(wck,"Wickets: %d",wicket1);
				//outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>599&&curPos.x<701&&curPos.y<401&&curPos.y>299)
			{
			
			
				run+=3;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
	
			
			else if(curPos.x>199&&curPos.x<301&&curPos.y<601&&curPos.y>499)
			{
			
			
				run+=4;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>399&&curPos.x<501&&curPos.y<601&&curPos.y>499)
			{
			
			
				run+=5;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		
			
			else if(curPos.x>599&&curPos.x<701&&curPos.y<601&&curPos.y>499)
			{
			
				run+=6;
				cleardevice();
				if(run==op){
				wicket1++;
				outtextxy(50,150,"Wicket!!");
				}
				else if(pbf==0)run2+=run;
				else if(pbf==1)run2+=op;
				
		
				sprintf(pl,"You chose: %d",run);
				outtextxy(50,50,pl);
				sprintf(opn,"Opponent chose: %d",op);
				outtextxy(50,100,opn);
			//	sprintf(wck,"Wickets: %d",wicket1);
			//	outtextxy(50,150,wck);
				delay(1000);		
				break;
			}
		}
		
}	
}
		cleardevice();
		readimagefile("MatchOver.jpg",0,0,900,700);
		char finrun[50];
		sprintf(finrun,"2nd Innings runs: %d",run2);
		outtextxy(50,100,finrun);
		sprintf(runs,"1st Innings runs: %d",run1);
        outtextxy(50,150,runs);
		
		if(target<=run2)
		{
			if(pbf==1)
				outtextxy(50,50,"Opponent has won the match");
			else if(pbf==0)
				outtextxy(50,50,"Player has won the match");
			
		}
		else if(run2<run1)
		{
			if(pbf==1)
				outtextxy(50,50,"Player has won the match");
			else if(pbf==0)
				outtextxy(50,50,"Opponent has won the match");
			
		}
		else if(run1==run2)
		{
			outtextxy(50,50,"The match has been tied");
		}
	delay(5000);

	closegraph();
}
