#include "stdafx.h"

int color(int c);
void gotoxy(int x, int y);

void flower() {
	gotoxy(66, 11);
	color(12);
	cout << "(_)";

	gotoxy(64, 12);
	cout << "(_)";

	gotoxy(68, 12);
	cout << "(_)";

	gotoxy(66, 13);
	cout << "(_)";

	gotoxy(67, 12);
	color(6);
	cout << "@";

	gotoxy(72, 10);
	color(13);
	cout << "(_)";

	gotoxy(76, 10);
	cout << "(_)";

	gotoxy(74, 9);
	cout << "(_)";

	gotoxy(74, 11);
	cout << "(_)";

	gotoxy(75, 10);
	color(6);
	cout << "@";

	gotoxy(71, 12);
	cout << "|";

	gotoxy(72, 11);
	cout << "/";

	gotoxy(70, 13);
	cout << "\\|";

	gotoxy(71, 14);
	cout << "|/";

	gotoxy(70, 15);
	cout << "\\|";

	gotoxy(71, 16);
	cout << "|/";

	gotoxy(71, 17);
	cout << "|";

	gotoxy(67, 17);
	color(10);
	cout << "\\\\\\\\"; 

	gotoxy(73, 17);
	cout << "//";

	gotoxy(67, 18);
	color(2);
	cout << "^^^^^^^^";

	gotoxy(65, 19);
	color(5);
	cout << "西荣我们最强";

	gotoxy(62, 20);
	cout << "开发者：廖美德，刘天义，杨佳容";
}