#include"ball.h"
void PL_control(int step) {

	//��ȡ�첽����״̬(���С������һ����
	if (GetAsyncKeyState(VK_DOWN))
	{
		if ((Playere_Ball.y + Playere_Ball.r) < MAP_H) {
			Playere_Ball.y += step;
		}
	}
	//��ȡ�첽����״̬(���С������һ����
	if (GetAsyncKeyState(VK_UP))
	{
		if ((Playere_Ball.y - Playere_Ball.r) > 0) {
			Playere_Ball.y -= step;
		}
	}
	//��ȡ�첽����״̬(���С������һ����
	if (GetAsyncKeyState(VK_LEFT))
	{
		if ((Playere_Ball.x - Playere_Ball.r) > 0) {
			Playere_Ball.x -= step;
		}
	}
	//��ȡ�첽����״̬(���С������һ����
	if (GetAsyncKeyState(VK_RIGHT))
	{
		if ((Playere_Ball.x + Playere_Ball.r) < MAP_W) {
			Playere_Ball.x += step;
		}
	}
}