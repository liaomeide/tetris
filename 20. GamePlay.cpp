#include"stdafx.h"

void MakeTetris(struct Tetris*);
void Flag(struct Tetris*);
void welcome();
int color(int c);
void CleanTetris(struct Tetris*);
void Replay(struct Tetris*);
int main();

/**
 * 开始游戏
 */
void Gameplay()
{
  
    struct Tetris t, * tetris = &t;       					//定义结构体的指针并指向结构体变量
    char ch;         									//定义接收键盘输入的变量
    tetris->number = 0;      								//初始化俄罗斯方块数为0个
    tetris->speed = 300;      							//初始移动速度为300ms
    tetris->score = 0;      								//初始游戏的分数为0分
    tetris->level = 1;      								//初始游戏为第1关
    while (1)											//循环产生方块，直至游戏结束
    {
        Flag(tetris);     								//得到产生俄罗斯方块类型的序号
        Temp = tetris->flag;     							//记住当前俄罗斯方块序号
        tetris->x = FrameX + 2 * Frame_width + 6;				//获得预览界面方块的x坐标
        tetris->y = FrameY + 10;                            //获得预览界面方块的y坐标
        tetris->flag = tetris->next;                    //获得下一个俄罗斯方块的序号
        PrintTetris(tetris);                           //调用打印俄罗斯方块方法
        tetris->x = FrameX + Frame_width;  					//获得游戏窗口中心方块x坐标
        tetris->y = FrameY - 1;     						//获得游戏窗口中心方块y坐标
        tetris->flag = Temp;     							//取出当前的俄罗斯方块序号
        while (1)  										//控制方块方向，直至方块不再下移
        {
        label:PrintTetris(tetris);					//打印俄罗斯方块
            Sleep(tetris->speed);   					//延缓时间
            CleanTetris(tetris);  						//清除痕迹
            Temp1 = tetris->x;    						//记住中心方块横坐标的值
            Temp2 = tetris->flag;    						//记住当前俄罗斯方块序号
            if (_kbhit())       				  	 		//判断是否有键盘输入，有则用ch↓接收
            {
                ch = _getch();
                if (ch == 75 || ch == 97)     							//按 ←键或A键则向左动，中心横坐标减2
                {
                    tetris->x -= 2;
                }
                if (ch == 77 || ch == 100)     							//按 →键或D键则向右动，中心横坐标加2
                {
                    tetris->x += 2;
                }
                if (ch == 80 || ch == 115)     							//按 ↓键或S键则加速下落
                {
                    if (ifMove(tetris) != 0)
                    {
                        tetris->y += 2;
                    }
                    if (ifMove(tetris) == 0)
                    {
                        tetris->y = FrameY + Frame_height - 2;
                    }
                }
                if (ch == 72||ch ==119)     						//按 ↑键或W键则变体,即当前方块顺时针转90度
                {
                    if (tetris->flag >= 2 && tetris->flag <= 3)
                    {
                        tetris->flag++;
                        tetris->flag %= 2;
                        tetris->flag += 2;
                    }
                    if (tetris->flag >= 4 && tetris->flag <= 7)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 4;
                    }
                    if (tetris->flag >= 8 && tetris->flag <= 11)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 8;
                    }
                    if (tetris->flag >= 12 && tetris->flag <= 15)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 12;
                    }
                    if (tetris->flag >= 16 && tetris->flag <= 19)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 16;
                    }
                }
                if (ch == 32)     					//按空格键，暂停
                {
                    PrintTetris(tetris);
                    while (1)
                    {
                        if (_kbhit())   			//再按空格键，继续游戏
                        {
                            ch = _getch();
                            if (ch == 32)
                            {
                                goto label;
                            }
                        }
                    }
                }
                if (ch == 27)
                {
                    system("cls");
                    memset(a, 0, 6400 * sizeof(int));       //初始化BOX数组
                    main();
                }
                if (ifMove(tetris) == 0) 			//如果不可动，上面操作无效
                {
                    tetris->x = Temp1;
                    tetris->flag = Temp2;
                }
                else      						//如果可动，执行操作
                {
                    goto label;
                }
            }
            tetris->y++;     					//如果没有操作指令，方块向下移动
            if (ifMove(tetris) == 0)  				//如果向下移动且不可动，方块放在此处
            {
                tetris->y--;
                PrintTetris(tetris);
                Del_Fullline(tetris);
                break;
            }
        }
        for (i = tetris->y - 2; i < tetris->y + 2; i++)	//游戏结束条件：方块触到框顶位置
        {
            if (i == FrameY)
            {
                system("cls");
                gotoxy(29, 7);
                cout << "   \n";
                color(12);
                cout << "\t\t\t■■■■   ■     ■   ■■     \n";
                cout << "\t\t\t■         ■■   ■   ■  ■   \n";
                cout << "\t\t\t■■■     ■  ■ ■   ■   ■  \n";
                cout << "\t\t\t■         ■   ■■   ■  ■   \n";
                cout << "\t\t\t■■■■   ■     ■   ■■     \n";
                gotoxy(17, 18);
                color(14);
                cout << "我要重新玩一局-------1";
                gotoxy(44, 18);
                cout << "不玩了，退出吧-------2\n";
                int n;
                gotoxy(32, 20);
                cout << "选择【1/2】：";
                color(11);
                cin >> n;
                switch (n)
                {
                case 1:
                    system("cls");
                    Replay(tetris);       	//重新开始游戏
                    break;
                case 2:
                    exit(0);
                    break;
                }
            }
        }
        tetris->flag = tetris->next;  			//清除下一个俄罗斯方块的图形(右边窗口)
        tetris->x = FrameX + 2 * Frame_width + 6;
        tetris->y = FrameY + 10;
        CleanTetris(tetris);
    }
}
