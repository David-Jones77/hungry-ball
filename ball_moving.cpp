#include"ball.h"

void AI_AUTO_MOVING()
{
	for (int i = 0;i < AI_NUM;i++)
	{
		double SCALE = MAP_W;
		int index = -1;
		if (AI_Ball[i].flag)
		{
			for (int j = i + 1;j < AI_NUM;j++)
			{
				if ((AI_Ball[i].r > AI_Ball[j].r) && AI_Ball[j].flag)
				{
					if (distance_PF(AI_Ball[i], AI_Ball[j]) < SCALE)
					{
						SCALE = distance_PF(AI_Ball[i], AI_Ball[j]);
						index = j;


					}
				}
			}
			
		}
		if (index != -1)
		{
			AI_CATCH(&AI_Ball[i], &AI_Ball[index], 1);
		}
	}
}


void AI_CATCH(ball *CATCH,ball* RUN,int step ) {

	if (CATCH->x < RUN->x)
	{
		CATCH->x += step;
		AI_Eat_FD();
		AI_Eat_AI(CATCH, RUN);
	}
	else
	{
		CATCH->x -= step;
		AI_Eat_FD();
		AI_Eat_AI(CATCH, RUN);
	}
	if (CATCH->y < RUN->y)
	{
		CATCH->y += step;
		AI_Eat_FD();
		AI_Eat_AI(CATCH, RUN);

	}
	else 
	{
		CATCH->y -= step;
		AI_Eat_FD();
		AI_Eat_AI(CATCH, RUN);
	}

}