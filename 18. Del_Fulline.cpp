#include"stdafx.h"
 
void MakeTetris(struct Tetris*);
void gotoxy(int x, int y);

/* 
*判断是否满行并删除满行的俄罗斯方块
*/

void Del_Fullline(struct Tetris* tetris)	//当某行有Frame_width-2个方块时，则满行消除
{
    int k, del_rows = 0;  						//分别用于记录某行方块的个数和删除方块的行数的变量
    for (j = FrameY + Frame_height - 1; j >= FrameY + 1; j--)
    {
        k = 0;
        for (i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2)
        {
            if (a[i][j] == 1) 					//纵坐标依次从下往上，横坐标依次由左至右判断是否满行
            {
                k++;  							//记录此行方块的个数
                if (k == Frame_width - 2)  		//如果满行
                {
                    for (k = FrameX + 2; k < FrameX + 2 * Frame_width - 2; k += 2)	//删除满行的方块
                    {
                        a[k][j] = 0;
                        gotoxy(k, j);
                        printf("  ");
                    }
                    //如果删除行以上的位置有方块，则先清除，再将方块下移一个位置
                    for (k = j - 1; k > FrameY; k--)
                    {
                        for (i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2)
                        {
                            if (a[i][k] == 1)
                            {
                                a[i][k] = 0;
                                gotoxy(i, k);
                                printf("  ");
                                a[i][k + 1] = 1;
                                gotoxy(i, k + 1);
                                printf("■");
                            }
                        }
                    }
                    j++;   				//方块下移后，重新判断删除行是否满行
                    del_rows++;	//记录删除方块的行数
                }
            }
        }
    }
    tetris->score += 100 * del_rows; 		//每删除一行，得100分
    if (del_rows > 0 && (tetris->score % 1000 == 0 || tetris->score / 1000 > tetris->level - 1))
    {        						//如果得1000分即累计删除10行，速度加快20ms并升一级
        tetris->speed -= 20;
        tetris->level++;
    }
}

