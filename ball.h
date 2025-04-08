#ifndef AWDAWDAHWH
#define AWDAWDAHWH
#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<ctime>

const int SCR_W = 1024;                              //���ƴ��ڸ߶�
const int SCR_H = 500;                               //���ƴ��ڿ��
const int MAP_W = SCR_W * 2;                         //��ͼ���
const int MAP_H = SCR_H * 2;                         //��ͼ�߶�
const int FD_NUM = 200;                              //ʳ��С�������
const int AI_NUM = 40;                               //AIС������
const double SFP = 1000 / 100;                        //ÿ֡ͼ���������Ҫ��ʱ��

struct ball
{
	double x, y;                                    //С���ڵ�ͼ�ϵ�Բ������
	double r;                                       //�뾶
	bool flag;                                      //����С���Ƿ���
	COLORREF color;                                 //�����ɫ

};
struct REF_xy
{
	double x;
	double y;
};

extern ball FD_Ball[FD_NUM];
extern ball Playere_Ball;
extern ball AI_Ball[AI_NUM];




void SCR_Draw();
void GAME_Draw();
void MAP_Draw();
void FD_Draw();
void FD_Init();
void GAME_Init();
void PY_Init();
void PY_Draw();
void PL_control(int step);
void PL_EAT_FD();
void FD_ADD(int i);
void AI_Init();
void AI_Draw();
double distance_PF(ball a, ball b);
void AI_AUTO_MOVING();
void AI_CATCH(ball* CATCH, ball* RUN, int step);
void AI_Eat_FD();
void AI_Eat_AI(ball* AI_catch, ball* AI_run);
void PL_EAT_AI();
void AI_EAT_PL();



                            //������ͼ

extern IMAGE MAP;

#endif