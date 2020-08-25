#include <iostream>
using namespace std;
#include <stdio.h>
#include <windows.h>  //控制DOS界面(获取控制台上坐标位置、设置字体颜色
#include <conio.h> //接收键盘输入输出（kbnit（），getch（）
#include <time.h>  //用于获得随机数

/*宏定义*/
#define FrameX 13 //游戏窗口左上角的X轴坐标为13
#define FrameY 3 //游戏窗口左上角的Y轴坐标为3
#define Frame_height 20  //游戏窗口的高度为20
#define Frame_width 18  //游戏窗口的宽度为18

int i, j, Temp, Temp1, Temp2; //Temp, Temp1, Temp2用于记住和转换方块变量的值
//标记游戏屏幕的图案，2， 1，0分别表示该位置为游戏边框，方块，无图案；初始化为无图案，
int a[80][80] = { 0 };
int b[4]; //标记4个“口”方块；1表示有方块，0表示无方快



///*//声明俄罗斯方块的结构体*/
//struct Tetris {
//    int x;  //中心方块的x轴坐标
//    int y; //中心方块的y轴坐标
//    int flag; //标记方块类型的符号
//    int speed; // 俄罗斯方块的移动速度
//    int number; //产生俄罗斯方块个数
//    int score; //游戏的分数
//    int level; //游戏的等级
//};
//HANDLE hOut;
struct Tetris* Tetris;

void gotoxy(int x, int y);
void title();
void flower();
void welcome();
void Flag(struct Tetris*);
void MakeTetris(struct Tetris*);
void PrintTetris(struct Tetris*);
void CleanTetris(struct Tetris*);
int ifMove(struct Tetris*);
void Del_Fullline(struct Tetris*);
