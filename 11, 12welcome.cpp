#include "stdafx.h"


int color(int c);
void gotoxy(int x, int y);
void DrawGameFrame();
void Gameplay();
void explation();
void rule();
void close();
int main();

/*设计菜单选项边框*/
void welcome() {
	int n;
	int i = 1;
	int j = 1;
	color(14); //黄色边框
	for (int i = 9; i <= 20; i++) { //循坏y轴坐标，打印输出上下边框===
		for (int j = 15; j <= 60; j++) {  //循环x轴坐标，打印输出左右边框||
			gotoxy(j, i);
			if (i == 9 || i == 20)
				cout << "=";
			else if (j == 15 || j == 59)
				cout << "||";
		}
	}

	color(12); //设置字体颜色为红色
	gotoxy(25, 12); //设置显示位置
	cout << "1. 开始游戏";
	gotoxy(40, 12);
	cout << "2. 按键说明";
	gotoxy(25, 17);
	cout << "3. 游戏规则";
	gotoxy(40, 17);
	cout << "4. 退出";
	gotoxy(21, 22);
	color(3);
	cout << "请选择[1 2 3 4]：[ ]\b\b";
	color(14);

	
	while (1) {
		cin >> n;
		if (n < 9) {
			switch (n) {
			case 1:
				system("cls");  //输入1清屏
				DrawGameFrame();
				Gameplay();
				break;
			case 2:
				explation();
				break;
			case 3:
				rule();
				break;
			case 4:
				close();
				break;
			}
		}
		else {
			cout << " ";
		}

	}
}
	