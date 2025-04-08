#include"ball.h"
void PL_control(int step) {

	//获取异步按键状态(玩家小球下移一步）
	if (GetAsyncKeyState(VK_DOWN))
	{
		if ((Playere_Ball.y + Playere_Ball.r) < MAP_H) {
			Playere_Ball.y += step;
		}
	}
	//获取异步按键状态(玩家小球上移一步）
	if (GetAsyncKeyState(VK_UP))
	{
		if ((Playere_Ball.y - Playere_Ball.r) > 0) {
			Playere_Ball.y -= step;
		}
	}
	//获取异步按键状态(玩家小球左移一步）
	if (GetAsyncKeyState(VK_LEFT))
	{
		if ((Playere_Ball.x - Playere_Ball.r) > 0) {
			Playere_Ball.x -= step;
		}
	}
	//获取异步按键状态(玩家小球右移一步）
	if (GetAsyncKeyState(VK_RIGHT))
	{
		if ((Playere_Ball.x + Playere_Ball.r) < MAP_W) {
			Playere_Ball.x += step;
		}
	}
}