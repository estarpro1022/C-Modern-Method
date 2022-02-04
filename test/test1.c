#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <time.h>

#define POSSIBLE 80
//定义全局变量
void gotoxy();

void HideCursor();

void startup();

void show();

void withoutInpute();

void withInpute();

void check();

void bossShow();

void bossWithoutInpute();

int high, width;                        //定义边界
int position_x, position_y;            //飞机位置
int bullet_x, bullet_y;                //子弹位置
int enemy_x, enemy_y;
int score;
int flag;                            //飞机状态
int HP;
int level_number;
int tool_number;
int probability;
int level_flag;
int bossHP = 10;
int bobullet_x;
int bobullet_y;
int left_x;
int left_y;
int right_x;
int right_y;
int over;

int main() {
//    CONSOLE_CURSOR_INFO cci; // 光标信息
//    cci.dwSize = 100;
//    cci.bVisible = FALSE; // 不可见
//    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci); // 将光标特性应用到控制台
    srand((unsigned)time(NULL));
    HideCursor();
    startup();// 数据初始化
    while(1) {
        gotoxy(0, 0);   // 调整光标位置
        show();
        check();
        if (level_flag == 2) {
            break;
        }
    }
    while(1) {
        gotoxy(0, 0);
        show();
        check();
        if (level_flag == 3) {
            break;
        }
    }
    while (1) {
        gotoxy(0, 0);
        show();
        check();
        if (level_flag == 4) {
            break;
        }
    }
    enemy_y = rand() % (width - 4) + 2;
    bobullet_x = enemy_x + 1;
    bobullet_y = enemy_y;
    left_x = enemy_x;
    left_y = enemy_y - 1;
    right_x = enemy_x;
    right_y = enemy_y + 1;
    gotoxy(width + 3, 2);
    printf("Level: %d", level_number);
    while (1) {
        // boss
        gotoxy(0, 0);
        if (level_number == 4)
        bossShow();
        else {
            show();
            check();
            if (level_number == 4) {
                enemy_y = rand() % (width - 4) + 2;
                bobullet_x = enemy_x + 1;
                bobullet_y = enemy_y;
                left_x = enemy_x;
                left_y = enemy_y - 1;
                right_x = enemy_x;
                right_y = enemy_y + 1;
                gotoxy(width + 3, 2);
                printf("Level: %d", level_number);
                gotoxy(width + 3, 9);
            }
        }

    }
    return 0;
}

void gotoxy(int x, int y)            //光标移动到(x,y)位置
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}

void HideCursor() // 用于隐藏光标
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};  // 第二个值为0表示隐藏光标
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void startup()                        //数据初始化
{
    system("cls");
    over = 0;
    level_flag = 1;
    level_number = 1;

    high = 18;
    width = 26;
    HP = 6;

    position_x = high - 3;
    position_y = width / 2;
    enemy_x = 1;
    enemy_y = 1 + rand() % (width - 2);

    left_x = enemy_x;
    left_y = enemy_y - 1;

    right_x = enemy_x;
    right_y = enemy_y + 1;

    bobullet_x = enemy_x + 1;
    bobullet_y = enemy_y;
    tool_number = 0;
    probability = 0;

    score = 0;
    flag = 0;                            //飞机完好

}

void show()                            //显示界面
{
    int i, j;
    for (i = 0; i < high; i++) {
        for (j = 0; j < width; j++) {
            if ((i == position_x) && (j == position_y))        //飞机坐标
                printf("*");
            else if ((i == enemy_x) && (j == enemy_y))                //敌机坐标
                printf("*");
            else if ((j == width - 1) || (i == high - 1) || (j == 0) || (i == 0))                //打印边界
                printf("#");
            else if ((i == bullet_x) && (j == bullet_y))            //子弹坐标
                printf("|");

            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    if (((position_x == enemy_x) && (position_y == enemy_y)) || (enemy_x == high - 2)) {
        enemy_x = 1;
        enemy_y = rand() % (width - 2) + 1;
        HP--;
        if (!HP) {
            flag = 1;                            //飞机撞毁 游戏结束
            printf("score: %d\n", score);
            printf("game over\n");
            printf("enter R to restart\n");
            printf("enter Q to quit\n");
            while (1) {
                if (_kbhit()) {
                    int ch = _getch();
                    if (ch == 'r' || ch == 'R') {
                        startup();
                        show();
                        break;
                    } else if (ch == 'q' || ch == 'Q') {
                        exit(0);
                    }
                }
            }
        }
    } else {
        printf("score: %d\n", score);
        printf("HP: %d\n", HP);
        gotoxy(width + 3, 2);
        printf("Level %d", level_number);
        gotoxy(width + 3, 4);
        printf("Tip: enter q to exit\n");
        gotoxy(width + 3, 5);
        printf("enter p to pause\n");
        gotoxy(width + 3, 6);
        printf("enter c to continue\n");
        gotoxy(0, 0);
    }
    gotoxy(width + 3, 9);
    printf("Tool number: %d", tool_number);
    gotoxy(0, 0);
    withoutInpute();
    withInpute();
}


void withoutInpute()                        //与用户输入无关
{
    if (bullet_x > 0)                            //子弹上升效果
        bullet_x--;
    if ((bullet_x == enemy_x) && (bullet_y == enemy_y))        //子弹命中敌机
    {
        score++;
        bullet_x = -1;
        enemy_x = 1;
        enemy_y = 1 + rand() % (width - 2);
        probability = rand() % 100 + 1;
        if (probability >= POSSIBLE) {
            tool_number++;
        }
    }
    if (HP < 6 && tool_number > 0) {
        HP++;
        tool_number--;
    }


    static int speed;
    if (speed < 50)                    //减慢敌机速度，不影响飞机和子弹速度
        speed++;
    if (speed == 50) {
        if (enemy_x < high)
            enemy_x++;
        else {
            enemy_x = 0;
            enemy_y = 1 + rand() % (width - 2);
        }
        speed = 0;
    }


}

void withInpute()                        //与用户输入有关
{
    char input;
    if (kbhit())                                        //控制飞机方向
    {
        input = getch();
        if ((input == 'w') && position_x > 1)
            position_x--;
        if ((input == 's') && position_x < high - 2)
            position_x++;
        if ((input == 'a') && position_y > 1)
            position_y--;
        if ((input == 'd') && position_y < width - 2)
            position_y++;
        if (input == ' ') {
            bullet_x = position_x - 1;
            bullet_y = position_y;
        }
        if (input == 'q') {
            exit(0);
        }
        if (input == 'p') {
            gotoxy(0, 0);
            int i, j;
            for (i = 0; i < high; i++) {
                for (j = 0; j < width; j++) {
                    if ((i == position_x) && (j == position_y))        //飞机坐标
                        printf("*");
                    else if ((i == enemy_x) && (j == enemy_y))                //敌机坐标
                        printf("*");
                    else if ((i == bullet_x) && (j == bullet_y))            //子弹坐标
                        printf("|");
                    else if ((j == width - 1) || (i == high - 1) || (j == 0) || (i == 0))                //打印边界
                        printf("#");
                    else if ((i == bobullet_x) && (j == bobullet_y) && (bossHP > 5) && (level_number == 4))
                        printf("+");
                    else if ((i == left_x) && (j == left_y) && (bossHP <= 5) && (level_number == 4))
                        printf("+");
                    else if ((i == right_x) && (j == right_y) && (bossHP <= 5) && (level_number) == 4)
                        printf("+");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            printf("\n");
            printf("score: %d\n", score);
            printf("HP: %d\n", HP);
            while (1) {
                if (_kbhit()) {
                    int ch = _getch();
                    if (ch == 'c'){
                        break;
                    }
                }
            }
        }
    }
}

void check() {
    if (score == 5 && level_flag != 2) {
        level_number++;
        level_flag = 2;
    } else if (score == 10 && level_flag != 3) {
        level_number++;
        level_flag = 3;
    } else if (score == 15 && level_flag != 4) {
        level_number++;
        level_flag = 4;
    }
}

void bossShow() {
    gotoxy(0, 0);
    int i, j;
    for (i = 0; i < high; i++) {
        for (j = 0; j < width; j++) {
            if ((i == position_x) && (j == position_y))        //飞机坐标
                printf("*");
            else if ((i == enemy_x) && (j == enemy_y))                //敌机坐标
                printf("*");
            else if ((i == bullet_x) && (j == bullet_y))            //子弹坐标
                printf("|");
            else if ((j == width - 1) || (i == high - 1) || (j == 0) || (i == 0))                //打印边界
                printf("#");
            else if ((i == bobullet_x) && (j == bobullet_y) && (bossHP > 5))    // && not ||
                printf("+");
            else if ((i == left_x) && (j == left_y) && (bossHP <= 5))
                printf("+");
            else if ((i == right_x) && (j == right_y) && (bossHP <= 5))
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    if (enemy_x == position_x && enemy_y == position_y) {
        HP = 0;
    }
    if (!HP) {
        printf("score: %d\n", score);
        printf("game over\n");
        printf("enter R to restart\n");
        printf("enter Q to quit\n");
        while (1) {
            if (_kbhit()) {
                int ch = _getch();
                if (ch == 'r' || ch == 'R') {
                    startup();
                    show();
                    break;
                } else if (ch == 'q' || ch == 'Q') {
                    exit(0);
                }
            }
        }
    }
    if (!bossHP) {
        printf("score: %d\n", score);
        printf("You win!\n");
        printf("enter Q to quit\n");
        while (1) {
            if (_kbhit()) {
                int ch = _getch();
                if (ch == 'q' || ch == 'Q') {
                    exit(0);
                }
            }
        }
    }
    if (HP != 0 && bossHP != 0) {
        printf("score: %d\n", score);
        printf("HP: %d", HP);
    }
    if (HP < 6 && tool_number > 0) {
        HP++;
        tool_number--;
    }
    gotoxy(width + 3, 9);
    printf("Tool number: %d", tool_number);
    bossWithoutInpute();
    withInpute();
}

void bossWithoutInpute() {

    if (bullet_x > 0) {
        bullet_x--;
    }
    if (bullet_x == enemy_x && bullet_y == enemy_y) {
        bossHP--;
        bullet_x = -1;
    }
    if (HP < 6 && tool_number > 0) {
        HP++;
        tool_number--;
    }
//    bobullet_x = enemy_x + 1;
//    bobullet_y = enemy_y;
    static int speed1;
    if (speed1 < 15) {
        speed1++;
    }
    if (speed1 == 15) {
        if (bossHP > 5) {
            if (bobullet_x == position_x && bobullet_y == position_y) {
                HP--;
                bobullet_x = enemy_x + 1;
                bobullet_y = enemy_y;
            }
            if (bobullet_x < high) {
                bobullet_x++;
            }
            if (bobullet_x == high) {
                bobullet_x = enemy_x + 1;
                bobullet_y = enemy_y;
            }
            if (bobullet_x == position_x && bobullet_y == position_y) {
                HP--;
                bobullet_x = enemy_x + 1;
                bobullet_y = enemy_y;
            }
        } else {
            if (left_x == position_x && left_y == position_y) {
                HP--;
                left_x = enemy_x;
                left_y = enemy_y - 1;
            }
            if (left_x < high) {
                left_x++;
            }
            if (left_x == high) {
                left_x = enemy_x;
                left_y = enemy_y - 1;
            }
            if (left_x == position_x && left_y == position_y) {
                HP--;
                left_x = enemy_x;
                left_y = enemy_y - 1;
            }
            if (right_x == position_x && right_y == position_y) {
                HP--;
                right_x = enemy_x;
                right_y = enemy_y + 1;
            }
            if (right_x < high) {
                right_x++;
            }
            if (right_x == high) {
                right_x = enemy_x;
                right_y = enemy_y + 1;
            }
            if (right_x == position_x && right_y == position_y) {
                HP--;
                right_x = enemy_x;
                right_y = enemy_y + 1;
            }
        }
        speed1 = 0;
    }
}
