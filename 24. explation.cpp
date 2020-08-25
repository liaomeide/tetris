#include"stdafx.h"

/*
按键说明
*/

int color(int c);
void gotoxy(int x, int y);
int main();

void explation()
{
    int i, j = 1;
    system("cls");			//清屏
    color(13);				//粉色
    gotoxy(32, 3);			//设置显示位置
    cout <<"按键说明";
    color(2);
    for (i = 6; i <= 18; i++)   			//输出上下边框===
    {
        for (j = 15; j <= 70; j++)  	//输出左右边框||
        {
            gotoxy(j, i);
            if (i == 6 || i == 18) cout <<"=";
            else if (j == 15 || j == 69) cout <<"||";
        }
    }
    color(3);
    gotoxy(18, 7);
    cout << "tip1: 玩家可以通过 ← → 方向键 或 A D来移动方块";
    color(10);
    gotoxy(18, 9);
    cout <<"tip2: 通过 ↑或 W 使方块旋转";
    color(14);
    gotoxy(18, 11);
    cout <<"tip3: 通过 ↓或 S 加速方块下落";
    color(11);
    gotoxy(18, 13);
    cout <<"tip4: 按空格键暂停游戏，再按空格键继续";
    color(4);
    gotoxy(18, 15);
    cout <<"tip5: 按ESC退出游戏";
    color(6);
    gotoxy(18, 17);
  
    cout << "tip6: 按任意键返回主页面";
    _getch();                //按任意键返回主界面
    system("cls");		//清屏
    main();			//返回主函数
}
