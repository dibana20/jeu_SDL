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


typedef enum STATE STATE;
enum STATE {waiting,following,attacking};
typedef struct
{
  SDL_Surface *img[4][5];  
  SDL_Rect pos; 
  SDL_Surface *exp[10];  
  SDL_Rect posexp; 
  int expframe; 
  int frame; 
  int direction; 
  int arret; 
  STATE state;
}Enemy;



typedef struct
{
  SDL_Rect pos2; 
  SDL_Surface *img; 

}image;


typedef struct
{
    SDL_Surface *sprite; 
    SDL_Surface *vies; /*!< Surface. */
    SDL_Surface *scoretxt; /*!< Surface. */
    SDL_Rect posPerso; /*!< Rectangle*/
    SDL_Rect posSprite; /*!< Rectangle*/
    SDL_Rect posVie; /*!< Rectangle*/
    SDL_Rect spritevie; /*!< Rectangle*/
    SDL_Rect posScore; /*!< Rectangle*/
    TTF_Font *police;
    int direction;  /*!< Entier */
    int score;  /*!< Entier */
    int vie;
    int jump_height;  /*!< Entier */
    int jump_V;  /*!< Entier */
    int up;  /*!< Entier */
    int speed;  /*!< Entier */
    float acceleration;  /*!< Reel */
    double dx;  /*!< double*/
    SDL_Rect posRelative;  /*!< Rectangle*/
    
    SDL_Rect posAbsolu;  /*!< Rectangle*/
} personne;



void init_background(image *imge);
void afficher_back(SDL_Surface *screen,image imge);




void initEnnemi(Enemy *e);					
void afficherEnnemi(Enemy e,SDL_Surface *screen);										
void animerEnnemi(Enemy *e);					
void move(Enemy *e);				
int collisionBB(personne p,Enemy e); 			
void free_enemy(Enemy *e);		
void afficher_explosion(Enemy e,SDL_Surface *screen);
void animer_explosion(Enemy *e);
void updateEnnemi (Enemy *e,SDL_Rect posHero);
void moveAI(Enemy* e,SDL_Rect posHero);
void updateEnnemiState (Enemy *e,int distEH);



void initPerso(personne *p);	
void afficherPerso(personne p, SDL_Surface * screen);	
void movePerso (personne *p,Uint32 dt);	
void animerPerso (personne* p);	
void saut (personne* p,Uint32 dt,int posinit);	
void saut2(personne *p, Uint32 dt);
void freePerso(personne *p);


#endif
