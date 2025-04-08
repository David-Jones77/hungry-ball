#include"ball.h"

ball FD_Ball[FD_NUM];
ball Playere_Ball;
IMAGE MAP(MAP_W, MAP_H);
ball AI_Ball[AI_NUM];

int main()
{
	initgraph(SCR_W, SCR_H, SHOWCONSOLE);           //创建屏幕窗口：长为SCR_W,宽为SCR_H
	GAME_Init();
	while (true)
	{
		clock_t Start_Draw_Time = clock();
		GAME_Draw();
		clock_t Frame_Draw_Time = clock()-Start_Draw_Time;
		if (Frame_Draw_Time < SFP)
		{
			clock_t Delaytime = SFP - Frame_Draw_Time;
			Sleep(Delaytime);
		}
		PL_control(3);
		PL_EAT_FD();
		PL_EAT_AI();
		AI_EAT_PL();
		AI_AUTO_MOVING();
		if (Playere_Ball.flag == false)
			break;
		
		

	}
	std::cin.get();


	return 0;
}



















