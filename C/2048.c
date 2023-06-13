#include <stdio.h>

// 绘制游戏面板横向线条
void draw_row()
{
    for (int width = 0; width < 6; width++) {
        printf("-----");
    }
    printf("-\n");
}

// 绘制数字，自适应宽度
void draw_number(int number)
{
    if (number / 10 == 0) {
        printf("  %d   ", number);
    } else if (number / 100 == 0) {
        printf(" %d   ", number);
    } else if (number / 1000 == 0) {
        printf(" %d  ", number);
    } else if (number / 10000 == 0) {
        printf(" %d ", number);
    }
}

// 绘制游戏面板横向
void draw_column()
{
    printf("|");
    draw_number(2);
    printf("|");

    printf("\n");
}

/**
*   绘制4x4的2048游戏面板
*
*   args:
*       numbers: 数组指针, 接收4行4列的二维数组
*/
void draw_board(int *numbers)
{   
    draw_row();
    draw_column();
    draw_row();
    draw_column();
    draw_row();
    draw_column();
    draw_row();
    draw_column();
    draw_row();
}

int main(int argc, char **argv)
{
    int numbers[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    draw_board(*numbers);

    return 0;
}
