/*����ȫ�ֱ���*/
extern int i, j, Temp,Temp1, Temp2; //Temp, Temp1, Temp2���ڼ�ס��ת�����������ֵ
//�����Ϸ��Ļ��ͼ����2�� 1��0�ֱ��ʾ��λ��Ϊ��Ϸ�߿򣬷��飬��ͼ������ʼ��Ϊ��ͼ����
extern int a[80][80];
extern int b[4]; //���4�����ڡ����飻1��ʾ�з��飬0��ʾ�޷���

#include <iostream>
using namespace std;
#include<stdio.h>
#include <windows.h>  //����DOS����(��ȡ����̨������λ�á�����������ɫ
#include <conio.h> //���ռ������������kbnit������getch����
#include <time.h>  //���ڻ�������

/*�궨��*/
#define FrameX 13 //��Ϸ�������Ͻǵ�X������Ϊ13
#define FrameY 3 //��Ϸ�������Ͻǵ�Y������Ϊ3
#define Frame_height 20  //��Ϸ���ڵĸ߶�Ϊ20
#define Frame_width 18  //��Ϸ���ڵĿ��Ϊ18

/*//��������˹����Ľṹ��*/
typedef struct Tetris {
    int x;  //���ķ����x������
    int y; //���ķ����y������
    int flag; //��Ƿ������͵ķ���
    int speed; // ����˹������ƶ��ٶ�
    int number; //��������˹�������
    int score; //��Ϸ�ķ���
    int level; //��Ϸ�ĵȼ�
    int next; //��һ��
}Tetris;


extern struct Tetris* Tetris;

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


//HANDLE hOut;