#ifndef FONCTION_H
#define FONCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <stdbool.h>
#include <time.h>


typedef struct
{
	SDL_Rect pos_img_affiche;
        SDL_Rect pos_img_ecran;
	SDL_Surface *img;
}image;

typedef struct
{
	SDL_Surface *txt;
	SDL_Rect pos_txt;
	SDL_Colour color_txt;
	TTF_Font *police;
}texte;

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



typedef struct minimap{
	
	SDL_Rect pos_mp;
	SDL_Surface *mp;
	SDL_Surface *per;
	SDL_Rect pos_per;
    SDL_Surface *enemy;
	SDL_Rect pos_enemy;
	SDL_Surface *img[10];
	SDL_Rect pos_enigme;
    SDL_Surface *mas;
    SDL_Rect pos;
    int frame;
	
}minimap;



typedef struct
{
	SDL_Surface *imgg[7];
    SDL_Rect posanim;
	SDL_Surface *img;
    SDL_Rect pos;
	SDL_Rect camera_pos;
	int frame;
    int direction;

}Background;


typedef struct {
    int score;
    int temps;
    char playerName[20];

} ScoreInfo;



typedef struct{

	SDL_Surface *background;
    SDL_Rect pos_b;
	SDL_Surface *question;
	SDL_Rect pos_question;

	SDL_Rect pos_reponse1txt;
	SDL_Rect pos_reponse2txt;
	SDL_Rect pos_reponse3txt;

	SDL_Surface *reponses[3];

	int pos_selected;
	int num_question;
	int vrai_reponse;
	int positionVraiReponse;
	TTF_Font *police; 
	TTF_Font *police1;

}enigmetf;





//back1
void initialiser_imageBACK (image *imge);
void initialiser_imageBACK1 (image *imge);
void initialiser_imageBACK2 (image *imge);
void initialiser_imageBACK3 (image *imge);
void initialiser_imageBOUTON1 (image *imgbtn);
void initialiser_imageBOUTON2 (image *imgbtn);
void initialiser_imageBOUTON3 (image *imgbtn);
void initialiser_imageBOUTON4 (image *imgbtn);
void initialiser_imageBOUTON5 (image *imgbtn);
void initialiser_imageBOUTON6 (image *imgbtn);
void initialiser_imageBOUTON7 (image *imgbtn);
void initialiser_imageBOUTON8 (image *imgbtn);

//back2
void initialiser_imageOPIM (image *imge);
void initialiser_imageBOUTONO1 (image *imgbtn);
void initialiser_imageBOUTONO2 (image *imgbtn);
void initialiser_imageBOUTONO3 (image *imgbtn);
void initialiser_imageBOUTONO4 (image *imgbtn);
void initialiser_imageBOUTONO5 (image *imgbtn);
void initialiser_imageBOUTONO6 (image *imgbtn);
void initialiser_imageBOUTONO7 (image *imgbtn);
void initialiser_imageBOUTONO33 (image *imgbtn);
void initialiser_imageBOUTONO44 (image *imgbtn);
void initialiser_imageBOUTONO55 (image *imgbtn);
void initialiser_imageBOUTONO66 (image *imgbtn);

//back3
void initialiser_imagePLAY (image *imge);
void initialiser_imageBOUTONP (image *imgbtn);

//back4
void initialiser_imageCREDIT1(image * imge);
void initialiser_imageBOUTONC1 (image *imgbtn);

//back5
void initialiser_imageCREDIT2(image *imge);
void initialiser_imageBOUTONC (image *imgbtn);

//back7(choix)
void initialiser_imageCHOIX (image *imge);
void initialiser_imageCHOIX_BTN1 (image *imge);
void initialiser_imageCHOIX_BTN2 (image *imge);



//back1
void afficher_imageBMP (SDL_Surface *screen, image imge);
void afficher_imageBMP1 (SDL_Surface *screen, image imge);
void afficher_imageBMP2 (SDL_Surface *screen, image imge);
void afficher_imageBMP3 (SDL_Surface *screen, image imge);
void afficher_imageBTN1 (SDL_Surface *screen, image imge); 
void afficher_imageBTN2 (SDL_Surface *screen, image imge);
void afficher_imageBTN3 (SDL_Surface *screen, image imge);
void afficher_imageBTN4 (SDL_Surface *screen, image imge);
void afficher_imageBTN5 (SDL_Surface *screen, image imge);
void afficher_imageBTN6 (SDL_Surface *screen, image imge);
void afficher_imageBTN7 (SDL_Surface *screen, image imge);
void afficher_imageBTN8 (SDL_Surface *screen, image imge);

//back2
void afficher_imageOPIM (SDL_Surface *screen, image imge);
void afficher_imageBTNO1 (SDL_Surface *screen, image imge); 
void afficher_imageBTNO2 (SDL_Surface *screen, image imge);
void afficher_imageBTNO3 (SDL_Surface *screen, image imge);
void afficher_imageBTNO4 (SDL_Surface *screen, image imge);
void afficher_imageBTNO5 (SDL_Surface *screen, image imge);
void afficher_imageBTNO6 (SDL_Surface *screen, image imge);
void afficher_imageBTNO7 (SDL_Surface *screen, image imge);
void afficher_imageBTNO33 (SDL_Surface *screen, image imge);
void afficher_imageBTNO44 (SDL_Surface *screen, image imge);
void afficher_imageBTNO55 (SDL_Surface *screen, image imge);
void afficher_imageBTNO66 (SDL_Surface *screen, image imge);
void liberer_image (image imge);

//back3
void afficher_imagePLAY (SDL_Surface *news, image imge);
void afficher_imageBTNP (SDL_Surface *news, image imge);

//back4
void afficher_imageCREDIT1 (SDL_Surface *screen,image imge);
void afficher_imageBTNC1 (SDL_Surface *screen,image imge);

//back5
void afficher_imageCREDIT2 (SDL_Surface *screen,image imge);
void afficher_imageBTNC (SDL_Surface *screen,image imge);

//back7(choix)
void afficher_imageCHOIX(SDL_Surface *screen, image imge);
void afficher_imageCHOIX_BTN1 (SDL_Surface *screen,image imge);
void afficher_imageCHOIX_BTN2 (SDL_Surface *screen,image imge);


void initialiser_audio (Mix_Music *music,int *volume);
void liberer_musique (Mix_Music *music);
void initialiser_audiobref (Mix_Chunk *music);
void liberer_musiquebref (Mix_Chunk *music);

void initialiser_texte (texte *txte);
void afficher_texte (SDL_Surface *screen, texte txte); 
void liberer_texte (texte txte);





















//enemy

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




//perso
void initPerso(personne *p);	
void afficherPerso(personne p, SDL_Surface * screen);	
void movePerso (personne *p,Uint32 dt);	
void animerPerso (personne* p);	
void saut (personne* p,Uint32 dt,int posinit);	
void saut2(personne *p, Uint32 dt);
void freePerso(personne *p);





//minimap
void initmap(minimap *m);
void afficherminimap(minimap m,SDL_Surface *screen);
void liberer_mp(minimap *m);
void afficher_temps(int t, SDL_Surface *ecran);
void animerMinimap(minimap *m);
SDL_Color GetPixel(SDL_Surface *surface,int x,int y);
//int collisionPP(SDL_Rect posminibonhomme, SDL_Surface* mask);
void MAJMinimap(SDL_Rect posJoueur,minimap *m,SDL_Rect camera,int redimensionnement);
void MAJMinimap_enemie(SDL_Rect pos_enemie,minimap *m,SDL_Rect camera,int redimensionnement);
int collisionPP_droite( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera);
int collisionPP_gauche( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera);
int collisionPP_up( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera);
int collisionPP_down( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera);


//background
void init_back(Background *b);
void afficher_back (SDL_Surface *screen, Background b);
void afficheranim(Background b,SDL_Surface *screen);
void animerBack(Background* b);
void free_back(Background *b);
void scrolling(Background *b,int direction,personne p);
void saveScore(ScoreInfo s, char *fileName);
void bestScore(char *filename, ScoreInfo trois[]);
void afficherBest(SDL_Surface *ecran, ScoreInfo t[]);




//enigme
void InitEnigme(enigmetf *e,char *nomfichier[]);
void afficherEnigme(enigmetf e,SDL_Surface *ecran);
int verify_enigme(enigmetf *e,SDL_Surface*ecran);
void animer(enigmetf *e);
void free_Surface_enigme(enigmetf e);

//city of the future
void afficher_city_future(SDL_Surface *screen, image imge);
void initialiser_city_future (image *imge);

//gameover
void initialiser_game_over (image *imge);
void afficher_game_over(SDL_Surface *screen, image imge);
void initialiser_image_game_over_BTN1 (image *imgbtn);
void initialiser_image_game_over_BTN2 (image *imgbtn);
void afficher_game_over_BTN1 (SDL_Surface *screen, image imge);
void afficher_game_over_BTN2 (SDL_Surface *screen, image imge);

//best score
void initialiser_best_score(image *imge);
void afficher_best_score(SDL_Surface *screen, image imge);
void initialiser_image_best_score_BTN1 (image *imgbtn);
void afficher_best_score_BTN1 (SDL_Surface *screen, image imge);

#endif
