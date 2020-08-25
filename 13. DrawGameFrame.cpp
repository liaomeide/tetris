#include "stdafx.h"

int color(int c);
void gotoxy(int x, int y);

/**
 * 制作游戏窗口
 */
void DrawGameFrame(){
	gotoxy(FrameX + Frame_width - 5, FrameY - 2);//设置游戏名称的显示位置
	color(11);//将字体颜色设置为蓝绿色
	cout << "趣味俄罗斯方块";//打印游戏名称
	
	
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 7);//设置上边框的显示位置
	color(2);//将字体显示为深绿色
	cout << "**********"; //打印下一个出现方块的上边框
	gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);
	color(3);//将字体颜色设置为深蓝绿色
	cout << "下一出现方块";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 13);//打印下一个出现方块上边框
	color(2);
	cout << "**********"; //打印下一个出现方块的下边框

	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 17);
	color(14);//黄色
	cout << "↑键：旋转";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 19);
	cout << "空格: 暂停游戏";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 15);
	cout << " Esc：退出游戏";

	gotoxy(FrameX, FrameY);
	color(12);
	cout << "╔";//打印左上框角
	gotoxy(FrameX + 2  *Frame_width - 2, FrameY);
	cout << "╗";//打印右上框角
	gotoxy(FrameX, FrameY + Frame_height);
	cout << "╚";//打印左下框角
	gotoxy(FrameX + 2 * Frame_width - 2, Frame_height);
	cout << "╝";//打印右下框角

	a[FrameX][FrameY + Frame_height] = 2;//记住该处已有图案
	a[FrameX + 2 * Frame_width - 2][FrameY + Frame_height] = 2;

	for (i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY);
		cout << "═";  //打印上横框
	}

	for (i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY + Frame_height);
		cout << "═";  //打印下横框
		a[FrameX + i][FrameY + Frame_height] = 2;//标记下横框为游戏边界,防止方块出界
	}

	for (i = 1; i < Frame_height; i ++) {
		gotoxy(FrameX, FrameY + i);
		cout << "║";  //打印左竖框
		a[FrameX ][FrameY + i] = 2;//标记左竖框为游戏边界,防止方块出界
	}

	for (i = 1; i < Frame_height; i ++) {
		gotoxy(FrameX + 2 * Frame_width - 2, FrameY +i );
		cout << "║";  //打印右竖框
		a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;//标记右竖框为游戏边界,防止方块出界
	}
}
