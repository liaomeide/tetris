#include"stdafx.h"

int color(int c);
void gotoxy(int x, int y);
void MakeTetris(struct Tetris*);

/*打印俄罗斯方块*/
void PrintTetris(struct Tetris* tetris){
	for (i = 0; i < 4; i++) {  //b[4]中有4个元素,循环这4个元素,让每个元素的值都为1
		b[i] = 1; //数组b[4]的每个元素的值都为1
	}
	MakeTetris(tetris); //制作游戏窗口
	for (i = tetris->x - 2; i <= tetris->x + 4; i += 2) {
		for (j = tetris->y - 2; j <= tetris->y + 1; j++) {  //循环方块所有可能出现的位置
			if (a[i][j] == 1 && j > FrameY) {  //如果这个位置上有方块
				gotoxy(i, j);
				cout << "■";  //打印边框里的方块
			}
		}
	}

	//打印菜单信息
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 1);  //设置打印位置	
	color(4);
	cout << "level: ";
	color(12);
	cout << tetris->level;  //输出等级
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 3);
	color(4);
	cout << "score: ";
	color(12);
	cout << tetris->score;  //输出分数
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 5);
	color(4);
	cout << "speed: ";
	color(12);
	cout << tetris->speed << "ms";
	//输出速度

}