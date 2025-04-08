#include"ball.h"
static REF_xy xy;



//��Ϸ����
void GAME_Draw()
{
	MAP_Draw();
	FD_Draw();
	PY_Draw();
	AI_Draw();
	SCR_Draw();
	
	




}

//��ͼ����
void MAP_Draw()
{
	SetWorkingImage(&MAP);                           //��ͼ������ɫ
	setbkcolor(WHITE);
	cleardevice();
}

//��Ļ���ڻ���
void SCR_Draw()
{

	SetWorkingImage();                               //����Ļ����������ͼ�ŵ���Ļ�С�
	
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


//����ʳ��С��
void FD_Draw() {
	for (int i = 0;i < FD_NUM;i++)
	{
		if (FD_Ball[i].flag == true) {
			setfillcolor(FD_Ball[i].color);
			solidcircle(FD_Ball[i].x, FD_Ball[i].y, FD_Ball[i].r);
		}
	}
}

//�������С��
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

//����AIС��
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