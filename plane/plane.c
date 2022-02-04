#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <stdio.h>

void LOAD();
void PLAY();
void QUIT();
void PRINTSCORE();
// define a global window
SDL_Window *Window = NULL;
SDL_Renderer *Renderer = NULL;

SDL_Surface *MainBackGroundSurface = NULL;  // 说明这是一个图形
SDL_Texture *MainBackGroundTexture = NULL;  // 画笔能画出来
SDL_Rect MainBackGroundRect;    // texture的信息

SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;
//SDL_Rect PlayBackGroundRect;

TTF_Font *ScoreFont = NULL;
SDL_Surface *ScoreSurface = NULL;
SDL_Texture *ScoreTexture = NULL;
SDL_Rect ScoreRect;
SDL_Color FontColor = {255, 255, 255, 255};

int SDL_main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    Window = SDL_CreateWindow("Example", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
                              750, 1030, SDL_WINDOW_SHOWN);
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    // -1 is autoselect, SDL_RENDERER_ACCELERATED makes cpu/显卡 run
    SDL_Event MainEvent;    // 主事件
    LOAD();
    // 编辑工作目录

    SDL_RenderClear(Renderer);  // 清空
    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);
    SDL_RenderPresent(Renderer);    // 刷新画笔显示
    while (SDL_WaitEvent(&MainEvent)) { // 键盘鼠标的互动
        switch (MainEvent.type) {
            case SDL_QUIT:
                QUIT();
                break;  // 关闭窗口
            case SDL_KEYDOWN:   // 按下键盘下的键
                switch (MainEvent.key.keysym.sym) {
                    case SDLK_s:
                    case SDLK_RETURN:
                        // 回车键
                        PLAY();
                        break;
                    case SDLK_ESCAPE:
                        // Esc键
                        QUIT();
                        break;
                    case SDLK_h:
                        PRINTSCORE();
                        break;

                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);
                // 打印当前鼠标坐标
                break;
            case SDL_MOUSEBUTTONUP:
                if (MainEvent.button.x > 256 && MainEvent.button.x < 489 && MainEvent.button.y
                > 888 && MainEvent.button.y < 957) {
                    PLAY();
                }
                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEMOTION:
                break;
            default:
                break;
        }
    }



    QUIT(); // return 0;
}
void QUIT() {
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}

void LOAD() {
    // 每一张图片基本都得这么写
    MainBackGroundSurface = IMG_Load("plane.jpg");
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, MainBackGroundSurface);
    MainBackGroundRect.x = 0;
    MainBackGroundRect.y = 0;
    MainBackGroundRect.w = MainBackGroundSurface -> w;
    MainBackGroundRect.h = MainBackGroundSurface -> h;

    PlayBackGroundSurface = IMG_Load("background1.jpg");
    PlayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, PlayBackGroundSurface);

    ScoreFont = TTF_OpenFont("consolas.ttf", 50);
}

void PLAY() {
    printf("You are in the Play UI!\n");
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, PlayBackGroundTexture, NULL, NULL);
    SDL_RenderPresent(Renderer);
}

void PRINTSCORE() {
    ScoreSurface = TTF_RenderUTF8_Blended(ScoreFont, "114514", FontColor);
    ScoreTexture = SDL_CreateTextureFromSurface(Renderer, ScoreSurface);
    ScoreRect = {580, 38, ScoreSurface->w, ScoreSurface->h};
    SDL_RenderCopy(Renderer, ScoreTexture, NULL, &ScoreRect);
    SDL_RenderPresent(Renderer);
}