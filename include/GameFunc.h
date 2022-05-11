#ifndef GAMEFUNC_H
#define GAMEFUNC_H

#include "gMonkey.h"
#include "BaseFunc.h"
#include "BaseObj.h"
#include "Background.h"
#include "HigherPath.h"
#include "Obstacle.h"
#include "gText.h"
#include "Timer.h"
#include "gBanana.h"
#include "Button.h"
#include "gSound.h"


const int BreakDistance = 50;

//----------Extern in Main----------

extern const Uint8* currentKeyStates;

//-----GameState-----
extern bool backToMenu;
extern bool menu;
extern bool play;
extern bool quit_game;
extern bool game_over;
extern bool game_paused;
extern bool quit;

//----------

void Exit_Sound();

string longLongToString(long long x);

void GameInitEverything(SDL_Renderer* gRenderer);

void HandleMenu(SDL_Renderer* gRenderer);

//-----gMonkey-----

void setMonkeyPos(gMonkey &gMonkey_Texture);

void setMonkeyPosYID();

void gMonkeyHandleMoving();

void gMonkeyHandleHigherPath();

void gMonkeyHandleWalkonObstacle();

void gMonkeyHandleMoving(SDL_Renderer* gRenderer);

//-----Game-----
void UpdateHighScore(int &BestDistance, int &BestBanana);

void DeathScreenShot(SDL_Renderer* gRenderer);

void HandleGameOver();

void HandleDeathScreen (SDL_Renderer* gRenderer);

#endif // GAMEFUNC_H
