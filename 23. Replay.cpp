#include"stdafx.h"

/*
重新开始游戏
*/

void DrawGameFrame();
void Gameplay();

void Replay(struct Tetris* tetris) {
	system("cls"); //清屏
	memset(a, 0, 6400 * sizeof(int)); //初始化a数组,否则不会正常显示方块,导致游戏直接结束
	DrawGameFrame();  //制作游戏窗口
	Gameplay(); //开始游戏
}