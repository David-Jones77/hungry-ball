#include"ball.h"


//��Ϸ��ʼ��
void GAME_Init() {

	std::srand((time(0)));                        //����α�������ʱ��Ϊ����
	FD_Init();                                   //ʳ��С���ʼ��
	PY_Init();
	AI_Init();

}

//��ʼ��С��״̬
void PY_Init() {

	Playere_Ball.x = std::rand() % MAP_W;
	Playere_Ball.y = std::rand() % MAP_H;
	Playere_Ball.r = 20;
	Playere_Ball.flag = true;
	Playere_Ball.color = GREEN;                  

}

//ʳ��С���ʼ��
void FD_Init() {

	for (int i = 0;i < FD_NUM;i++)
	{

		FD_Ball[i].x = std::rand() % MAP_W;
		FD_Ball[i].y = std::rand() % MAP_H;
		FD_Ball[i].r = std::rand() % 11;
		FD_Ball[i].flag = true;
		FD_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //��ʼ��С��״̬��
	}
}


void AI_Init() {
	for (int i = 0;i < AI_NUM;i++)
	{

		AI_Ball[i].x = std::rand() % MAP_W;
		AI_Ball[i].y = std::rand() % MAP_H;
		AI_Ball[i].r = std::rand() % 20+10;
		AI_Ball[i].flag = true;
		AI_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);   //��ʼ��С��״̬��
	}
}
