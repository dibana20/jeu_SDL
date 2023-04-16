#ifndef ENEMY_H
#define ENEMY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <unistd.h>



typedef struct
{
  SDL_Surface *img[2][5];
  SDL_Rect pos;
  SDL_Surface *exp[10];
  SDL_Rect posexp;
  int expframe;
  int frame;
  int direction;
  int arret;
}Enemy;

typedef struct
{
  SDL_Rect pos2;
  SDL_Surface *img;

}image;

typedef struct
{
    SDL_Surface *sprite;
    SDL_Surface *vies;
    SDL_Surface *scoretxt;
    SDL_Rect posPerso;
    SDL_Rect posSprite;
    SDL_Rect posVie;
    SDL_Rect spritevie;
    SDL_Rect posScore;
    TTF_Font *police;
    int direction;
    int score;
    int vie;
    int jump_height;
    int jump_V;
    int up;
    int speed;
    float acceleration;
    double dx;
    SDL_Rect posRelative;
    
    SDL_Rect posAbsolu;
} personne;



void init_background(image *imge);
void afficher_back(SDL_Surface *screen,image imge);




void initEnnemi(Enemy *e);					
void afficherEnnemi(Enemy e, SDL_Surface *screen);										
void animerEnnemi(Enemy *e);					
void move(Enemy *e);				
int collisionBB(personne p,Enemy e); 			
void moveIA(Enemy* e);
void free_enemy(Enemy *e);		
void afficher_explosion(Enemy e,SDL_Surface *screen);
void animer_explosion(Enemy *e);



void initPerso(personne *p);	
void afficherPerso(personne p, SDL_Surface * screen);	
void movePerso (personne *p,Uint32 dt);	
void animerPerso (personne* p);	
void saut (personne* p,Uint32 dt,int posinit);	
void saut2(personne *p, Uint32 dt);
void freePerso(personne *p);


#endif
