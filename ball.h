#ifndef AWDAWDAHWH
#define AWDAWDAHWH
#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<ctime>

const int SCR_W = 1024;                              //绘制窗口高度
const int SCR_H = 500;                               //绘制窗口宽度
const int MAP_W = SCR_W * 2;                         //地图宽度
const int MAP_H = SCR_H * 2;                         //地图高度
const int FD_NUM = 200;                              //食物小球的数量
const int AI_NUM = 40;                               //AI小球数量
const double SFP = 1000 / 100;                        //每帧图像绘制所需要的时间

struct ball
{
	double x, y;                                    //小球在地图上的圆点坐标
	double r;                                       //半径
	bool flag;                                      //代表小球是否存活
	COLORREF color;                                 //填充颜色

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



                            //创建地图

extern IMAGE MAP;

#endif