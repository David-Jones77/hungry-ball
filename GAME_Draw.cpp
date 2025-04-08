#include"ball.h"
static REF_xy xy;



//游戏绘制
void GAME_Draw()
{
	MAP_Draw();
	FD_Draw();
	PY_Draw();
	AI_Draw();
	SCR_Draw();
	
	




}

//地图绘制
void MAP_Draw()
{
	SetWorkingImage(&MAP);                           //地图设置颜色
	setbkcolor(WHITE);
	cleardevice();
}

//屏幕窗口绘制
void SCR_Draw()
{

	SetWorkingImage();                               //对屏幕操作，将地图放到屏幕中。
	
	if (Playere_Ball.x - 0.5 * SCR_W < 0)
		xy.x = 0;
	else if (Playere_Ball.x + 0.5 * SCR_W > MAP_W)
		xy.x = MAP_W - SCR_W;
	else
		xy.x = Playere_Ball.x - 0.5 * SCR_W;
	if (Playere_Ball.y - 0.5 * SCR_H < 0)
		xy.y = 0;
	else if (Playere_Ball.y + 0.5 * SCR_H > MAP_H)
		xy.y = MAP_H - SCR_H;
	else
		xy.y = Playere_Ball.y - 0.5 * SCR_H;



	putimage(0, 0, SCR_W, SCR_H, &MAP,xy.x,xy.y);
	
}


//绘制食物小球
void FD_Draw() {
	for (int i = 0;i < FD_NUM;i++)
	{
		if (FD_Ball[i].flag == true) {
			setfillcolor(FD_Ball[i].color);
			solidcircle(FD_Ball[i].x, FD_Ball[i].y, FD_Ball[i].r);
		}
	}
}

//绘制玩家小球
void PY_Draw() {

	if (Playere_Ball.flag == true) {
		setfillcolor(Playere_Ball.color);
		solidcircle(Playere_Ball.x + 10, Playere_Ball.y + 8, Playere_Ball.r);

		setbkmode(TRANSPARENT);
		settextstyle(17, 0, _T("Consolas"));
		settextcolor(RED);
		outtextxy(Playere_Ball.x, Playere_Ball.y, _T("ydj"));
	}
}

//绘制AI小球
void AI_Draw()
{
	for (int i = 0;i < AI_NUM;i++)
	{
		if (AI_Ball[i].flag == true) {
			setfillcolor(AI_Ball[i].color);
			solidcircle(AI_Ball[i].x, AI_Ball[i].y, AI_Ball[i].r);
		}
	}
}