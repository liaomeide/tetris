/*欢迎界面上面的标题*/
#include "stdafx.h"

int color(int c);
void gotoxy(int x,  int y);

void title() {
	color(15); //亮白色
	gotoxy(24, 3);
	cout << " 趣 味 俄 罗 斯 方 块\n"; //输出标题
	color(11); //亮蓝色
	gotoxy(18, 5);
	cout << "■";    //■
	gotoxy(18, 6);  
	cout << "■■";  //■■
	gotoxy(18, 7);   
	cout << "■";    //■

	color(14); //黄色
	gotoxy(26, 6);
	cout << "■■"; //■■
	gotoxy(28, 7);
	cout << "■■"; //  ■■

	color(10); //绿色
	gotoxy(36, 6);
	cout << "■■"; //■■
	gotoxy(36, 7);
	cout << "■■"; //■■

	color(13); //粉色
	gotoxy(45, 5);
	cout << "■";  //■
	gotoxy(45, 6);
	cout << "■";  //■
	gotoxy(45, 7);
	cout << "■";  //■
	gotoxy(45, 8);
	cout << "■";  //■

	color(12);  //亮红色
	gotoxy(56, 6);
	cout << "■";          //■
	gotoxy(52, 7);
	cout << "■■■";  //■■■
}