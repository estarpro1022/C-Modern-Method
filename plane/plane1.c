#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

#define high 18
#define width 26

int plane_x = high - 3;
int plane_y = width / 2;
int enemy_x;
int enemy_y = width / 2;
int bullet_x;
int bullet_y;
int blood;

char map[high][width];

void initial();
void enemy();
void move();
void shoot();


int main() {
    srand((unsigned)time(NULL));
    initial();
    Sleep(1000);
    return 0;
}

void initial() {
    // 初始界面
    blood = 5;
    for (int i = 0; i < high; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || j == 0 || i == high - 1 || j == width - 1) {
                map[i][j] = '#';
            } else {
                map[i][j] = ' ';
            }
        }
    }
    map[plane_x][plane_y] = '*';
    for (int i = 0; i < high; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

void enemy() {
    // enemy position
    enemy_x = 1;
//    enemy_y = rand() % (width - 2) + 1;
    if (enemy_x < high - 2) {
        map[enemy_x][enemy_y] = '*';
        enemy_x++;
    } else if (enemy_x == high - 2) {
        map[enemy_x][enemy_y] = '*';
        enemy_x = 1;
        enemy_y = rand() % (width - 2) + 1;
    }
}

void move() {
    int ch = -1;
    while (_kbhit()) {
        ch = _getch();
    }
    if (ch != -1) {
        switch (ch) {
            case 'w':
            case 'W':
                if (plane_x > 1) {
                    plane_x--;
                }
                break;
            case 's':
            case 'S':
                if (plane_x < high - 1) {
                    plane_x--;
                }
                break;
            case 'd':
            case 'D':
                if (plane_y < width - 2) {
                    plane_y++;
                }
                break;
            case 'a':
            case 'A':
                if (plane_y > 1) {
                    plane_y--;
                }
                break;
            case 'j':
            case 'J':
                bullet_x = plane_x - 1;
                bullet_y = plane_y;
                break;
            default:
                break;
        }
    }
}

void shoot() {
    if (bullet_x == enemy_x && bullet_y == enemy_y) {
        enemy_x = 1;
        enemy_y = rand() % (width - 2) + 1;
        bullet_x = -1;
        bullet_y = -1;
        // pay attention here
    } else {
        bullet_x--;
    }
    if (bullet_x == enemy_x && bullet_y == enemy_y) {
        enemy_x = 1;
        enemy_y = rand() % (width - 2) + 1;
        bullet_x = -1;
        bullet_y = -1;
    } else {
        enemy_x++;
    }

}























