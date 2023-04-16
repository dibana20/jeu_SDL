#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"


void initialiser_imageBACK (image *imge)
{
imge->img=IMG_Load("menu.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}

void initialiser_imageBACK1 (image *imge)
{
imge->img=IMG_Load("menu1.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}

void initialiser_imageBACK2 (image *imge)
{
imge->img=IMG_Load("menu2.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}

void initialiser_imageBACK3 (image *imge)
{
imge->img=IMG_Load("menu3.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}

void initialiser_imageOPIM (image *imge)
{
imge->img=IMG_Load("flou.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}

void initialiser_imagePLAY (image *imge)
{
imge->img=IMG_Load("back.jpg");
if (imge->img == NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}

imge->pos_img_ecran.x=0;
imge->pos_img_ecran.y=0;
imge->pos_img_affiche.x=0;
imge->pos_img_affiche.y=0;
imge->pos_img_affiche.w=1090;
imge->pos_img_affiche.h=668;
}



void initialiser_imageBOUTON1 (image *imgbtn)
{
imgbtn->img=IMG_Load("play.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=678; 
imgbtn->pos_img_affiche.y=350;
}

void initialiser_imageBOUTON2 (image *imgbtn)
{
imgbtn->img=IMG_Load("options.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=678; 
imgbtn->pos_img_affiche.y=420;
}

void initialiser_imageBOUTON3 (image *imgbtn)
{
imgbtn->img=IMG_Load("credits.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=680; 
imgbtn->pos_img_affiche.y=488;
}



void initialiser_imageBOUTON4 (image *imgbtn)
{
imgbtn->img=IMG_Load ("exit.gif");
if (imgbtn->img == NULL) {
	printf("unable to load background image %s\n", SDL_GetError()); 
	return ;}

imgbtn->pos_img_affiche.x=680;
imgbtn->pos_img_affiche.y=555;

}

void initialiser_imageBOUTON5 (image *imgbtn)
{
imgbtn->img=IMG_Load("play2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=678; 
imgbtn->pos_img_affiche.y=350;
}



void initialiser_imageBOUTON6 (image *imgbtn)
{
imgbtn->img=IMG_Load("options2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=678; 
imgbtn->pos_img_affiche.y=420;
}

void initialiser_imageBOUTON7 (image *imgbtn)
{

imgbtn->img=IMG_Load("credits2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=680; 
imgbtn->pos_img_affiche.y=488;
}

void initialiser_imageBOUTON8 (image *imgbtn)
{
imgbtn->img=IMG_Load("exit2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=680; 
imgbtn->pos_img_affiche.y=555;
}


void initialiser_imageBOUTONO1 (image *imgbtn)
{
imgbtn->img=IMG_Load("moins.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=353; 
imgbtn->pos_img_affiche.y=162;
}

void initialiser_imageBOUTONO2 (image *imgbtn)
{
imgbtn->img=IMG_Load("plus.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=563; 
imgbtn->pos_img_affiche.y=162;
}

void initialiser_imageBOUTONO3 (image *imgbtn)
{
imgbtn->img=IMG_Load("full.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=420; 
imgbtn->pos_img_affiche.y=300;
}



void initialiser_imageBOUTONO4 (image *imgbtn)
{
imgbtn->img=IMG_Load ("normal.gif");
if (imgbtn->img == NULL) {
	printf("unable to load background image %s\n", SDL_GetError()); 
	return ;}

imgbtn->pos_img_affiche.x=550;
imgbtn->pos_img_affiche.y=295;

}

void initialiser_imageBOUTONO5 (image *imgbtn)
{
imgbtn->img=IMG_Load("menop.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=418; 
imgbtn->pos_img_affiche.y=394;
}



void initialiser_imageBOUTONO6 (image *imgbtn)
{
imgbtn->img=IMG_Load("exitop.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=420; 
imgbtn->pos_img_affiche.y=469;
}

void initialiser_imageBOUTONO7 (image *imgbtn)
{
imgbtn->img=IMG_Load("optionsop.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=415; 
imgbtn->pos_img_affiche.y=56;
}



void initialiser_imageBOUTONO33 (image *imgbtn)
{
imgbtn->img=IMG_Load("full2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=420; 
imgbtn->pos_img_affiche.y=298;
}



void initialiser_imageBOUTONO44 (image *imgbtn)
{
imgbtn->img=IMG_Load("normal2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=548; 
imgbtn->pos_img_affiche.y=298;
}

void initialiser_imageBOUTONO55 (image *imgbtn)
{
imgbtn->img=IMG_Load("menop2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=414; 
imgbtn->pos_img_affiche.y=390;
}

void initialiser_imageBOUTONO66 (image *imgbtn)
{
imgbtn->img=IMG_Load("exitop2.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=430; 
imgbtn->pos_img_affiche.y=467;
}

void initialiser_imageBOUTONP1 (image *imgbtn)
{
imgbtn->img=IMG_Load("revenir.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=996; 
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.h=53; 
imgbtn->pos_img_affiche.w=50;
}






void afficher_imageBMP (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

  void afficher_imageBMP1 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBMP2 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBMP3 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN1 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN2 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN3 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN4 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN5 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN6 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN7 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTN8 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}


void afficher_imageOPIM (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO1 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO2 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO3 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO4 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO5 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO6 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO7 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO33 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO44 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO55 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNO66 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imagePLAY (SDL_Surface *news, image imge)
{
SDL_BlitSurface (imge.img, NULL, news, &imge.pos_img_affiche);
}

void afficher_imageBTNP1 (SDL_Surface *news, image imge)
{
SDL_BlitSurface (imge.img, NULL, news, &imge.pos_img_affiche);
}











void liberer_image (image imge)
{
SDL_FreeSurface (imge.img);
}

void initialiser_audio (Mix_Music *music,int *volume)
{
Mix_Init(MIX_INIT_MP3);
if (Mix_OpenAudio (44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024)==-1){
printf("%s", SDL_GetError());
}

music=Mix_LoadMUS ("fez.mp3"); 
Mix_PlayMusic (music, -1);
Mix_VolumeMusic (*volume);
}

void liberer_musique (Mix_Music *music)
{
Mix_FreeMusic (music);
}

void initialiser_audiobref (Mix_Chunk *music)
{
Mix_OpenAudio (44100, MIX_DEFAULT_FORMAT, 2, 2048);
music= Mix_LoadWAV ("button.wav");
Mix_PlayChannel( 0, music, 0);
if (music==NULL) 
{printf("%s", SDL_GetError());}
}

void liberer_musiquebref (Mix_Chunk *music)
{
Mix_FreeChunk (music);
}

void initialiser_texte (texte *txte)
{
TTF_Init();
txte->police = TTF_OpenFont ("line.TTF", 20);
txte->color_txt.r=255;
txte->color_txt.g=255;
txte->color_txt.b=255;
txte->pos_txt.x=462;
txte->pos_txt.y=220;
}

void afficher_texte (SDL_Surface *screen, texte txte)
{
txte.txt=TTF_RenderText_Blended (txte.police, "welcome to your", txte.color_txt); 
SDL_BlitSurface (txte.txt, NULL, screen, &txte.pos_txt);
}

void liberer_texte (texte txte)
{
TTF_CloseFont (txte.police);
TTF_Quit(); 
}



void initEnnemi(Enemy *e)
{
	e->img[0][0]=IMG_Load("right1.gif");
	e->img[0][1]=IMG_Load("right2.gif");
	e->img[0][2]=IMG_Load("right3.gif");
	e->img[0][3]=IMG_Load("right4.gif");
	e->img[0][4]=IMG_Load("right5.gif");
	e->img[1][0]=IMG_Load("left1.gif");
	e->img[1][1]=IMG_Load("left2.gif");
	e->img[1][2]=IMG_Load("left3.gif");
	e->img[1][3]=IMG_Load("left4.gif");
	e->img[1][4]=IMG_Load("left5.gif");
	e->pos.x=700;
	e->pos.y=350;
	e->pos.h=174;
	e->pos.w=138;
	e->frame=0;
	e->direction=0;
}

void afficherEnnemi(Enemy e, SDL_Surface *screen)
{
  SDL_BlitSurface(e.img[e.direction][e.frame],NULL,screen,&e.pos);
}


void move(Enemy *e)
{
  if (e->pos.x>1000){
  e->direction=1;}
  else{
  if (e->pos.x<700){
  e->direction=0;}
  }
  if (e->direction==0){
  (e->pos.x)+=9;}
  else{
  if (e->direction==1){
  (e->pos.x)-=9;}
  }
}

void animerEnnemi(Enemy *e)
{
  if (e->direction==0){
  SDL_Delay(60);
  if (e->frame==4){
  e->frame=0;}
  else{
  (e->frame)++;}}
  else{
  if (e->direction==1){
  SDL_Delay(60);
  if (e->frame==4){
  e->frame=0;}
  else{
  (e->frame)++;}}     
  }
}


int collisionBB(personne p,Enemy e)
{
  int col;
  if ((e.pos.x+e.pos.w<p.posPerso.x) || (e.pos.x>p.posPerso.x+p.posPerso.w) || (e.pos.y+e.pos.h<p.posPerso.y) || (e.pos.y>p.posPerso.y+p.posPerso.h)){
  col=0;}
  else{
  col=1;}  
  return col;
}

void free_enemy(Enemy *e)
{
	SDL_FreeSurface(e->img[0][0]);
	SDL_FreeSurface(e->img[0][1]);
	SDL_FreeSurface(e->img[0][2]);
	SDL_FreeSurface(e->img[0][3]);
	SDL_FreeSurface(e->img[0][4]);
	SDL_FreeSurface(e->img[1][0]);
	SDL_FreeSurface(e->img[1][1]);
	SDL_FreeSurface(e->img[1][2]);
	SDL_FreeSurface(e->img[1][3]);
	SDL_FreeSurface(e->img[1][4]);
}











void initPerso(personne *p)
{
    p->sprite = IMG_Load("sprite.png");
    p->posPerso.x = 0;
    p->posPerso.y = 265;
    p->posPerso.w =151;
    p->posPerso.h = 258;

    p->posSprite.x = 0;
    p->posSprite.y = 0;
    p->posSprite.w = 151;
    p->posSprite.h = 258;
    
    
    p->posVie.x = 15;
    p->posVie.y = 15;
    p->posVie.h = 26;
    p->posVie.w = 116;
    
    
    p->spritevie.x = 0;
    p->spritevie.y = 0;
    p->spritevie.h = 26;
    p->spritevie.w = 116;

    p->vies = IMG_Load("HEARTS.png");
    p->score =0;
    p->posScore.x = 15;
    p->posScore.y = 50;
    TTF_Init();
    p->police = TTF_OpenFont("font.ttf", 30); 
    p->jump_V = 0;
    p->direction = -1;
    p->jump_height =35;
    p->up = 0;
    p->speed = 1;
    p->acceleration = 0;
}

void afficherPerso(personne p, SDL_Surface *screen)
{
    
    SDL_BlitSurface (p.sprite,&p.posSprite,screen,&p.posPerso);
    SDL_Color couleur = {255, 255, 255};
    char s[20];
    sprintf(s, "Score: %d", p.score);
    p.scoretxt = TTF_RenderText_Blended(p.police, s, couleur);
    SDL_BlitSurface(p.scoretxt, NULL, screen, &p.posScore);
    SDL_BlitSurface(p.vies, &p.spritevie, screen, &p.posVie);      
}


void movePerso (personne *p,Uint32 dt)
{
p->dx=((p->acceleration / 2) * (dt * dt) + (p->speed * dt));
switch (p->direction)
    {
    case 1:
        if (p->posPerso.x>10){
        p->posPerso.x -= p->dx;}
        break;
    case 0:
		if (p->posPerso.x<939){
        p->posPerso.x += p->dx;}
        break;
    default:
        p->acceleration = 0;
        break;
       }
}


void animerPerso(personne *p)
{
   p->posSprite.y =p->direction* (p->posSprite.h);
   if (p->posSprite.x == (755- p->posSprite.w)){
          p->posSprite.x  =0;}
   else {
   p->posSprite.x  = p->posSprite.x + p->posSprite.w;}
   
}




void saut (personne* p,Uint32 dt,int posinit)
{
if (p->up == 1)
    {
        p->jump_V += 3;
        p->posPerso.y += p->jump_V;
        if (p->posPerso.y > (posinit))
        {
            p->posPerso.y =posinit;
            p->jump_V = 0;
            p->up = 0;
        }
    }
}



void saut2(personne *p, Uint32 dt) {
   
   int posx_absolu, posy_absolu ;
   if (p->up == 1) {
        int vitesse = 100;
        p->posRelative.x += vitesse * dt / 1000;
        double a = -0.001;
        double c = 150.0;
        p->posRelative.y = a * p->posRelative.x * p->posRelative.x + c;
        p->posAbsolu.x = posx_absolu + p->posRelative.x;
        p->posAbsolu.y = posy_absolu - p->posRelative.y;

        p->up = 0; 
    }
}

void freePerso(personne *p)
{
    SDL_FreeSurface(p->sprite);
    SDL_FreeSurface(p->scoretxt);
    SDL_FreeSurface(p->vies);
     TTF_CloseFont(p->police);
}













void initmap(minimap *m)
{
m->mp=IMG_Load("minimap2.gif");
m->pos_mp.x=673;
m->pos_mp.y=20;
m->pos_mp.w=395;
m->pos_mp.h=135;

m->per=IMG_Load("miniperso.gif");
m->pos_per.x=678;
m->pos_per.y=112;
m->pos_per.h=100;
m->pos_per.w=120;

m->enemy=IMG_Load("minienemy.png");
m->pos_enemy.x=65;
m->pos_enemy.y=220;
m->pos_enemy.h=37;
m->pos_enemy.w=53;

m->img[0]=IMG_Load("e1.gif");
m->img[1]=IMG_Load("e2.gif");
m->img[2]=IMG_Load("e3.gif");
m->img[3]=IMG_Load("e4.gif");
m->img[4]=IMG_Load("e5.gif");
m->img[5]=IMG_Load("e6.gif");
m->img[6]=IMG_Load("e7.gif");
m->img[7]=IMG_Load("e8.gif");
m->img[8]=IMG_Load("e9.gif");
m->img[9]=IMG_Load("e10.gif");
m->pos_enigme.x=801;
m->pos_enigme.y=-122;
m->pos_enigme.h=500;
m->pos_enigme.w=496;
m->frame=0;

m->mas=IMG_Load("mapa1.png");
m->pos.x=673;
m->pos.y=20;
m->pos.w=395;
m->pos.h=135;
}



void afficherminimap(minimap m,SDL_Surface *screen)
{
SDL_BlitSurface (m.mp, NULL, screen,&m.pos_mp);
SDL_BlitSurface (m.per,NULL, screen,&m.pos_per);
SDL_BlitSurface (m.enemy, NULL, screen,&m.pos_enemy);
SDL_BlitSurface(m.img[m.frame],NULL,screen,&m.pos_enigme);
}




void liberer_mp(minimap *M)
{
SDL_FreeSurface (M->mp);
SDL_FreeSurface (M->per);
SDL_FreeSurface (M->enemy);
SDL_FreeSurface(M->img[0]);
SDL_FreeSurface(M->img[1]);
SDL_FreeSurface(M->img[2]);
SDL_FreeSurface(M->img[3]);
SDL_FreeSurface(M->img[4]);
SDL_FreeSurface(M->img[5]);
SDL_FreeSurface(M->img[6]);
SDL_FreeSurface(M->img[7]);
SDL_FreeSurface(M->img[8]);
SDL_FreeSurface(M->img[9]);
SDL_FreeSurface (M->mas);

}




void MAJMinimap(SDL_Rect posJoueur, minimap *m,SDL_Rect camera,int redimensionnement)
{
m->pos_per.x=(posJoueur.x+camera.x) * redimensionnement/100+680;
m->pos_per.y=(posJoueur.y+camera.y) * redimensionnement/100+57;
}

void MAJMinimap_enemie(SDL_Rect pos_enemie, minimap *m,SDL_Rect camera,int redimensionnement)
{
m->pos_enemy.x=(pos_enemie.x+camera.x) * redimensionnement/100+675;
m->pos_enemy.y=(pos_enemie.y+camera.x) * redimensionnement/100+40;
}



SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;
	char* pPosition = (char* ) pSurface->pixels;
	pPosition += ( pSurface->pitch * y ) ;
	pPosition += ( pSurface->format->BytesPerPixel) ;
	memcpy (&col ,pPosition ,pSurface->format->BytesPerPixel);
	SDL_GetRGB(col ,pSurface->format ,&color.r ,&color.g ,&color.b) ;
	return (color);
}




int collisionPP( SDL_Rect posjoueur, SDL_Surface *mask)
{
SDL_Surface *BackgroundMasque=mask;
int x=posjoueur.x;
int y=posjoueur.y;
int h=posjoueur.h;
int w=posjoueur.w;
int collision;
int i;
SDL_Color couleur_obstacle={0,0,0};
SDL_Color test;

int pos[8][2];
pos[0][0]=x;
pos[0][1]=y;
pos[1][0]=(x+w)/2;
pos[1][1]=y;
pos[2][0]=x+w;
pos[2][1]=y;
pos[3][0]=x;
pos[3][1]=(y+h)/2;
pos[4][0]=x;
pos[4][1]=y+h;
pos[5][0]=(x,w)/2;
pos[5][1]=y+h;
pos[6][0]=(x+w)/2;
pos[6][1]=y+h;
pos[7][0]=x+w;
pos[7][1]=(y+h)/2;
i=0;
collision=0;
while(i<8 && collision==0){
test=GetPixel(BackgroundMasque,pos[i][0],pos[i][1]);
if (couleur_obstacle.r==test.r && couleur_obstacle.g==test.g && couleur_obstacle.b==test.b){
collision=1;}
else{
i++;}}
return collision;
}


void afficher_temps(int t, SDL_Surface *ecran)
{
    SDL_Color couleurBlanche = {0, 0, 0};
    int temps_ecoule;
    temps_ecoule = SDL_GetTicks() - t;
    int min = (temps_ecoule / 60000)% 60;
    int sec = (temps_ecoule / 1000)% 60;
    char entree[6];
    sprintf(entree, "%d.%d",min,sec);
    TTF_Font *police = TTF_OpenFont("font.ttf", 24);
    SDL_Surface *texte = TTF_RenderUTF8_Solid(police, entree, couleurBlanche);
    SDL_Rect position = {145,15,0,0};
    SDL_BlitSurface(texte, NULL, ecran, &position);
    TTF_CloseFont(police);
    SDL_FreeSurface(texte);
}

void animerMinimap(minimap *m)
{


  if (m->frame==9){
  m->frame=0;}
  else{
  (m->frame)++;}
}















void init_back(Background *b)
{
b->img=IMG_Load("back2.jpg");
b->imgg[0]=IMG_Load("e1.png");
b->imgg[1]=IMG_Load("e2.png");
b->imgg[2]=IMG_Load("e3.png");
b->imgg[3]=IMG_Load("e4.png");
b->imgg[4]=IMG_Load("e5.png");
b->imgg[5]=IMG_Load("e6.png");
b->imgg[6]=IMG_Load("e7.png");

b->pos.x=0;
b->pos.y=0;
b->pos.w=1768;
b->pos.h=668;

b->posanim.x=15;
b->posanim.y=83;
b->posanim.w=34;
b->posanim.h=30;

b->camera_pos.x=0;
b->camera_pos.y=0;
b->camera_pos.w=1090;
b->camera_pos.h=668;

b->frame=0;
}



void afficher_back(SDL_Surface *screen,Background b)
{
SDL_BlitSurface (b.img,&b.camera_pos, screen,&b.pos);
}




void afficheranim(Background b,SDL_Surface *screen)
{
 SDL_BlitSurface(b.imgg[b.frame],NULL,screen,&b.posanim);
}

void free_back(Background *b)
{
SDL_FreeSurface(b->img);
SDL_FreeSurface(b->imgg[0]);
SDL_FreeSurface(b->imgg[1]);
SDL_FreeSurface(b->imgg[2]);
SDL_FreeSurface(b->imgg[3]);
SDL_FreeSurface(b->imgg[4]);
SDL_FreeSurface(b->imgg[5]);
SDL_FreeSurface(b->imgg[6]);
}

void animerBack (Background* b)
{
    //SDL_Delay(80);
	if (b->frame==6){
	b->frame=0;}
	else{
	(b->frame)++;}
}


void scrolling(Background *b,int direction,personne p) 
{
	double dx = p.dx;
	double dy = p.dx;

	if (direction == 0){ // scroll right
	b->camera_pos.x += dx;}
	else {
	if (direction == 1){ // scroll left
	b->camera_pos.x -= dx;}
	else{
	if (direction == 2 && p.posPerso.y== 0){ // scroll up
	b->camera_pos.y -= dy;}
	else{
    if (direction == 3 && p.posPerso.y== 668){ // scroll down
	b->camera_pos.y += dy;}
	}}}
}


























































