#include"ball.h"


//游戏初始化
void GAME_Init() {

	std::srand((time(0)));                        //消除伪随机，以时间为种子
	FD_Init();                                   //食物小球初始化
	PY_Init();
	AI_Init();

}

//初始化小球状态
void PY_Init() {

	Playere_Ball.x = std::rand() % MAP_W;
	Playere_Ball.y = std::rand() % MAP_H;
	Playere_Ball.r = 20;
	Playere_Ball.flag = true;
	Playere_Ball.color = GREEN;                  

}

//食物小球初始化
void FD_Init() {

	for (int i = 0;i < FD_NUM;i++)
	{

		FD_Ball[i].x = std::rand() % MAP_W;
		FD_Ball[i].y = std::rand() % MAP_H;
		FD_Ball[i].r = std::rand() % 11;
		FD_Ball[i].flag = true;
		FD_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //初始化小球状态。
	}
}


void AI_Init() {
	for (int i = 0;i < AI_NUM;i++)
	{

		AI_Ball[i].x = std::rand() % MAP_W;
		AI_Ball[i].y = std::rand() % MAP_H;
		AI_Ball[i].r = std::rand() % 20+10;
		AI_Ball[i].flag = true;
		AI_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //初始化小球状态。
	}
}
