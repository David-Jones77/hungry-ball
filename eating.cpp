#include"ball.h"

double distance_PF(ball a, ball b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void PL_EAT_FD() {
	for (int i = 0;i < FD_NUM;i++)
	{
		if ((distance_PF(Playere_Ball, FD_Ball[i]) <= Playere_Ball.r)&& FD_Ball[i].flag)
		{
			Playere_Ball.r += FD_Ball[i].r/10;
			FD_Ball[i].flag = false;
		}
		if (!FD_Ball[i].flag)
			FD_ADD(i);
	}
	
}

void FD_ADD(int i) {
	FD_Ball[i].x = std::rand() % MAP_W;
	FD_Ball[i].y = std::rand() % MAP_H;
	FD_Ball[i].r = std::rand() % 11;
	FD_Ball[i].flag = true;
	FD_Ball[i].color = RGB(std::rand() % 256, std::rand() % 256, std::rand() % 256);
}



void AI_Eat_FD()
{
	for (int i = 0;i < AI_NUM;i++)
	{
		for(int j=0;j<FD_NUM;j++)
		if ((distance_PF(AI_Ball[i], FD_Ball[j]) <= AI_Ball[i].r) && FD_Ball[j].flag)
		{
			AI_Ball[i].r += FD_Ball[j].r / 10;
			FD_Ball[j].flag = false;
		}
		if (!FD_Ball[i].flag)
			FD_ADD(i);
	}
}



void AI_Eat_AI(ball* AI_catch, ball* AI_run)
{
	if (distance_PF(*AI_catch, *AI_run) <= AI_catch->r && AI_run->flag)
	{
		AI_catch->r += AI_run->r / 10;
		AI_run->flag = false;
	}
}


void PL_EAT_AI() {
	for (int i = 0;i < AI_NUM;i++)
	{
		if ((distance_PF(Playere_Ball, AI_Ball[i]) <= Playere_Ball.r) && AI_Ball[i].flag&& Playere_Ball.r> AI_Ball[i].r)
		{
			Playere_Ball.r += AI_Ball[i].r / 10;
			AI_Ball[i].flag = false;
		}
		
	}

}


void AI_EAT_PL() {

	for (int i = 0;i < AI_NUM;i++)
	{
		if ((distance_PF(Playere_Ball, AI_Ball[i]) <= AI_Ball[i].r) && Playere_Ball.flag && Playere_Ball.r < AI_Ball[i].r)
		{
			
			Playere_Ball.flag = false;
		}

	}

}