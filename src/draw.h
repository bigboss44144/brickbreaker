#include "stds.h"

extern App app;

extern void prepareScene();
extern void presentScene();

extern void blitRect(SDL_Texture*, SDL_Rect*, int, int);
extern void blit(SDL_Texture*, int x, int y, bool isCenter);
extern SDL_Texture* loadTexture(char*);