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

void initialiser_imageCREDIT1(image *imge)
{
imge->img=IMG_Load("credit1.jpg");
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


void initialiser_imageCREDIT2(image *imge)
{
imge->img=IMG_Load("credit2.jpg");
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

void initialiser_imageCHOIX (image *imge)
{
imge->img=IMG_Load("choix.jpg");
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


void initialiser_imageBOUTONP (image *imgbtn)
{
imgbtn->img=IMG_Load("revenir.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=991; 
imgbtn->pos_img_affiche.y=590;
imgbtn->pos_img_affiche.h=53; 
imgbtn->pos_img_affiche.w=50;
}

void initialiser_imageBOUTONC (image *imgbtn)
{
imgbtn->img=IMG_Load("revenir.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=991; 
imgbtn->pos_img_affiche.y=1;
imgbtn->pos_img_affiche.h=53; 
imgbtn->pos_img_affiche.w=50;
}

void initialiser_imageBOUTONC1 (image *imgbtn)
{
imgbtn->img=IMG_Load("next.gif");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=1016; 
imgbtn->pos_img_affiche.y=8;
imgbtn->pos_img_affiche.h=53; 
imgbtn->pos_img_affiche.w=50;
}

void initialiser_imageCHOIX_BTN1(image *imgbtn)
{
imgbtn->img=IMG_Load("singleplayer.png");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=319; 
imgbtn->pos_img_affiche.y=155;
imgbtn->pos_img_affiche.h=135; 
imgbtn->pos_img_affiche.w=464;
}

void initialiser_imageCHOIX_BTN2 (image *imgbtn)
{
imgbtn->img=IMG_Load("multiplayer.png");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=322; 
imgbtn->pos_img_affiche.y=374;
imgbtn->pos_img_affiche.h=135; 
imgbtn->pos_img_affiche.w=464;
}

//city of the future
void initialiser_city_future (image *imge)
{
imge->img=IMG_Load("cityofthefuture.jpg");
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

void initialiser_game_over(image *imge)
{
imge->img=IMG_Load("gameover.jpg");
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


void initialiser_image_game_over_BTN1 (image *imgbtn)
{
imgbtn->img=IMG_Load("yes.png");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=456; 
imgbtn->pos_img_affiche.y=486;
}


void initialiser_image_game_over_BTN2 (image *imgbtn)
{
imgbtn->img=IMG_Load("no.png");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=533; 
imgbtn->pos_img_affiche.y=486;
}

void initialiser_best_score(image *imge)
{
imge->img=IMG_Load("score.jpg");
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

void initialiser_image_best_score_BTN1(image *imgbtn)
{
imgbtn->img=IMG_Load("best-score.png");
	if (imgbtn->img== NULL) {
		printf("unable to load background image %s \n", SDL_GetError());
		return ;}

imgbtn->pos_img_affiche.x=820; 
imgbtn->pos_img_affiche.y=590;
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


void afficher_imageBTNP (SDL_Surface *news, image imge)
{
SDL_BlitSurface (imge.img, NULL, news, &imge.pos_img_affiche);
}

void afficher_imageCREDIT1 (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}


void afficher_imageCREDIT2 (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNC1 (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageBTNC (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageCHOIX (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageCHOIX_BTN1 (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_imageCHOIX_BTN2 (SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_city_future(SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_game_over(SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_game_over_BTN1 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}


void afficher_game_over_BTN2 (SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}


void afficher_best_score(SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
}

void afficher_best_score_BTN1(SDL_Surface *screen, image imge)
{
SDL_BlitSurface (imge.img, NULL, screen, &imge.pos_img_affiche);
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











//enemy
void initEnnemi(Enemy *e)
{
	e->state=attacking;
	e->img[0][0]=IMG_Load("right1.png");
	e->img[0][1]=IMG_Load("right2.png");
	e->img[0][2]=IMG_Load("right3.png");
	e->img[0][3]=IMG_Load("right4.png");
	e->img[0][4]=IMG_Load("right5.png");
	e->img[1][0]=IMG_Load("left1.png");
	e->img[1][1]=IMG_Load("left2.png");
	e->img[1][2]=IMG_Load("left3.png");
	e->img[1][3]=IMG_Load("left4.png");
	e->img[1][4]=IMG_Load("left5.png");
    e->img[2][0]=IMG_Load("right1.gif");
	e->img[2][1]=IMG_Load("right2.gif");
	e->img[2][2]=IMG_Load("right3.gif");
	e->img[2][3]=IMG_Load("right4.gif");
	e->img[2][4]=IMG_Load("right5.gif");
	e->img[3][0]=IMG_Load("left1.gif");
	e->img[3][1]=IMG_Load("left2.gif");
	e->img[3][2]=IMG_Load("left3.gif");
	e->img[3][3]=IMG_Load("left4.gif");
	e->img[3][4]=IMG_Load("left5.gif");
	e->pos.x=900;
	e->pos.y=380;
	e->pos.h=174;
	e->pos.w=135;
	e->frame=0;
	e->direction=1;
    e->exp[0]=IMG_Load("exp1.png");
	e->exp[1]=IMG_Load("exp2.png");
	e->exp[2]=IMG_Load("exp3.png");
	e->exp[3]=IMG_Load("exp4.png");
	e->exp[4]=IMG_Load("exp5.png");
	e->exp[5]=IMG_Load("exp6.png");
	e->exp[6]=IMG_Load("exp7.png");
	e->exp[7]=IMG_Load("exp8.png");
	e->exp[8]=IMG_Load("exp9.png");
	e->exp[9]=IMG_Load("exp10.png");
    e->posexp.x=0;
	e->posexp.y=0;
	e->posexp.h=258;
	e->posexp.w=258;    
    e->expframe=0;
    e->arret=0;
    e->state=waiting;
}



/*void move(Enemy *e)
{
	if (e->pos.x>900){
	e->direction=1;}
	else{
	if (e->pos.x<800){
	e->direction=0;}
	}
	if (e->direction==0){
	(e->pos.x)+=8;}
	else{
	if (e->direction==1){
	(e->pos.x)-=8;}
	}
}*/


void afficherEnnemi(Enemy e,SDL_Surface *screen)
{
	SDL_BlitSurface(e.img[e.direction][e.frame],NULL,screen,&e.pos);
}


void animerEnnemi(Enemy *e)
{
	SDL_Delay(70);
	if (e->frame==4){
	e->frame=0;}
	else{
	(e->frame)++;}	
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
    SDL_FreeSurface(e->img[2][0]);
	SDL_FreeSurface(e->img[2][1]);
	SDL_FreeSurface(e->img[2][2]);
	SDL_FreeSurface(e->img[2][3]);
	SDL_FreeSurface(e->img[2][4]);
	SDL_FreeSurface(e->img[3][0]);
	SDL_FreeSurface(e->img[3][1]);
	SDL_FreeSurface(e->img[3][2]);
	SDL_FreeSurface(e->img[3][3]);
	SDL_FreeSurface(e->img[3][4]);
    SDL_FreeSurface(e->exp[0]);
	SDL_FreeSurface(e->exp[1]);
	SDL_FreeSurface(e->exp[2]);
	SDL_FreeSurface(e->exp[3]);
	SDL_FreeSurface(e->exp[4]);
	SDL_FreeSurface(e->exp[5]);
	SDL_FreeSurface(e->exp[6]);
	SDL_FreeSurface(e->exp[7]);
	SDL_FreeSurface(e->exp[8]);
	SDL_FreeSurface(e->exp[9]);
}


void afficher_explosion(Enemy e,SDL_Surface *screen)
{
 SDL_BlitSurface(e.exp[e.expframe],NULL,screen,&e.posexp);
}


void animer_explosion(Enemy *e)
{
    SDL_Delay(25);
	if (e->expframe==9){
	e->arret=1;}
	else{
	(e->expframe)++;}
}

void moveAI(Enemy* e,SDL_Rect posHero)
{
    int s1=850,s2=250;
    int d=(e->pos.x) - posHero.x;
	if (d>s2 && d<s1){
	e ->direction=1; 
	e->pos.x-=8;}
	else {
	if (d>-s1 && d<-s2){
	e ->direction=0; 
	e ->pos.x+=8;}
	else{
	if (d>=0 && d<=s2) {
	e ->direction=3;
	e ->pos.x-=8;}
	else{
    if (d>=-s2  && d<=0){
	e ->direction=2;
	e -> pos.x +=8;}
    }}}
}


void updateEnnemiState (Enemy* e, int distEH) 
{
int s1=850,s2=250;
switch(e->state){
case(waiting):
if (distEH>s1 ){
e->state=waiting;}
else{
if (s2<distEH<=s1 ){
e->state=following;}}
break;
case(following):
if (s2<distEH<=s1 ){
e->state=following;}
else{
if (0<distEH<=s2 ){
e->state=attacking;}}
break;
case(attacking):
if (0<distEH<=s2 ){
e->state=attacking;}
break;
}
}


void updateEnnemi (Enemy *e,SDL_Rect posHero)
{
switch(e->state){
case(waiting):
animerEnnemi(e);	
break;
case(following):
animerEnnemi(e);
moveAI(e,posHero);
break;
case(attacking):
animerEnnemi(e);
moveAI(e,posHero);
break;
}
}










//perso
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












//minimap
void initmap(minimap *m)
{
m->mp=IMG_Load("minimap1.jpg");
m->pos_mp.x=673;
m->pos_mp.y=20;
m->pos_mp.w=395;
m->pos_mp.h=135;

m->per=IMG_Load("miniperso.gif");
m->pos_per.x=678;
m->pos_per.y=112;
m->pos_per.h=100;
m->pos_per.w=120;

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

m->mas=IMG_Load("mask.jpg");
m->pos.x=0;
m->pos.y=0;
m->pos.w=1090;
m->pos.h=668;
}



void afficherminimap(minimap m,SDL_Surface *screen)
{
SDL_BlitSurface (m.mp, NULL, screen,&m.pos_mp);
//SDL_BlitSurface (m.mas, NULL, screen,&m.pos);
SDL_BlitSurface (m.per,NULL, screen,&m.pos_per);
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



SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;
	char* pPosition = ( char* ) surface->pixels ;
	pPosition += ( surface->pitch * y ) ;
	pPosition += ( surface->format->BytesPerPixel * x ) ;
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
	return ( color ) ;
}





/*int collisionPP( SDL_Rect posjoueur, SDL_Surface *mask)
{
SDL_Surface *BackgroundMasque=mask;
int x=posjoueur.x;
int y=posjoueur.y;
int h=posjoueur.h;
int w=posjoueur.w;
int collision=0;
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
}*/



int collisionPP_droite( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera)
{
int collision=0;
int i;
SDL_Color couleur_obstacle={0,0,0},test;
//int couleur_obstacle;
//SDL_Color couleur_obstacle;
//Uint32 col=0;
int pos[3][2];
pos[0][0]=camera.x+posjoueur.x+posjoueur.w;
pos[0][1]=posjoueur.y;
pos[1][0]=camera.x+posjoueur.x+posjoueur.w;
pos[1][1]=posjoueur.y+posjoueur.h/2;
pos[2][0]=camera.x+posjoueur.x+posjoueur.w;
pos[2][1]=posjoueur.y+posjoueur.h;
for(i=0;i<2 && collision==0;i++)
{test=GetPixel(mask,pos[i][0],pos[i][1]);
if ((test.r==couleur_obstacle.r)&&(test.g==couleur_obstacle.g)&&(test.b==couleur_obstacle.b))
collision=1;
//collision=1;

}
return collision;
}


int collisionPP_gauche( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera)
{
int collision=0;
int i;
SDL_Color couleur_obstacle={0,0,0},test;
int pos[3][2];
pos[0][0]=100+camera.x+posjoueur.x;
pos[0][1]=120+posjoueur.y;
pos[1][0]=100+camera.x+posjoueur.x;
pos[1][1]=120+posjoueur.y+posjoueur.h/2;
pos[2][0]=100+camera.x+posjoueur.x;
pos[2][1]=120+posjoueur.y+posjoueur.h;
for(i=0;i<2 && collision==0;i++)
{test=GetPixel(mask,pos[i][0],pos[i][1]);
if ((test.r==couleur_obstacle.r)&&(test.g==couleur_obstacle.g)&&(test.b==couleur_obstacle.b))
collision=1;
//collision=1;

}
return collision;
}




int collisionPP_up( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera)
{
int collision=0;
int i;
SDL_Color couleur_obstacle={0,0,0},test;
int posX,posY;
posX=camera.x+ posjoueur.x+ posjoueur.w/2;
posY=posjoueur.y;

test=GetPixel(mask,posX,posY);
if ((test.r==couleur_obstacle.r)&&(test.g==couleur_obstacle.g)&&(test.b==couleur_obstacle.b))
collision=1;

return collision;
}


int collisionPP_down( SDL_Rect posjoueur, SDL_Surface *mask,SDL_Rect camera)
{
int collision=0;
int i;
SDL_Color couleur_obstacle={0,0,0},test;
int posX,posY;
posX=camera.x+ posjoueur.x+ posjoueur.w/2;
posY=posjoueur.y+ posjoueur.h;

test=GetPixel(mask,posX,posY);
if ((test.r==couleur_obstacle.r)&&(test.g==couleur_obstacle.g)&&(test.b==couleur_obstacle.b))
collision=1;

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















//background
void init_back(Background *b)
{
b->img=IMG_Load("back1.jpg");

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










//enigme
void InitEnigme(enigmetf *e,char *nomfichier[]){  
 
	nomfichier[100];


	FILE *fquestion=NULL;
	FILE *freponse=NULL;
	FILE *fvraireponse=NULL;
	
	e->pos_selected=0;
	e->background= IMG_Load("quiz.jpg");
    e->pos_b.x=0;
	e->pos_b.y=0;
	e->pos_b.h=1000;
	e->pos_b.w=1000;
	
	TTF_Init();
	SDL_Color couleur = {255,255,255};

	e->police = TTF_OpenFont("arial.ttf", 30);
	e->police1 = TTF_OpenFont("arial.ttf", 25);
	  
	char questionn[150];
	
	srand(time(NULL)); 
	e->num_question=rand()%4; 

	while(e->num_question==0){
		srand(time(NULL));
		e->num_question=rand()%4;
	}
	 
    sprintf(*nomfichier,"questions.txt");

	fquestion=fopen(*nomfichier,"r+");

	if(fquestion!=NULL){
	 
		int test=1;
		while (fgets(questionn, 150, fquestion) &&(test!=e->num_question)){ 
			test++;
		}
		
		fclose(fquestion);
	}

	char reponse[20];

	int min,max;
    switch(e->num_question)
    {
    	case 1:
    	{
    		min=0;
    		max=2;
    		break;
    	}
    	case 2:
    	{
    		min=3;
    		max=5;
    		break;
    	}
    	case 3:
    	{
    		min=6;
    		max=8;
    		break;
    	}
    }


	freponse=fopen("reponses.txt","r+");
	if(freponse!=NULL){
		int test=0;
		while (fgets((reponse), 15, freponse) &&(test<max)){	
			
			if(test>=min){
				e->reponses[test-min]=TTF_RenderText_Blended(e->police1, reponse, couleur); 
			}
			test++;
		}	
		fclose(freponse);
	}


	
	fvraireponse=fopen("vraireponses.txt","r+");
	if(fvraireponse!=NULL){
		
		int test=1;
		while (fgets((reponse), 15, fvraireponse)){
			
			if(test==e->num_question){ 
				printf("%s\n",reponse);
				e->reponses[2]=TTF_RenderText_Blended(e->police1, reponse, couleur); 
			}
			test++;
		}
		fclose(fvraireponse);
	}

	srand(time(NULL));
	e->positionVraiReponse=rand()%4;

	while(e->positionVraiReponse==0){
		srand(time(NULL));
		e->positionVraiReponse=rand()%4;
	}
	printf("%d\n",e->positionVraiReponse);

	e->question = TTF_RenderText_Blended(e->police, questionn, couleur);

	e->pos_question.x=130;
	e->pos_question.y=150;
 

	e->pos_reponse1txt.x=495;
	e->pos_reponse1txt.y=365;

	e->pos_reponse2txt.x=225;
	e->pos_reponse2txt.y=500;

	e->pos_reponse3txt.x=790;
	e->pos_reponse3txt.y=500;
 

}

void afficherEnigme(enigmetf e,SDL_Surface *ecran){

	
	SDL_BlitSurface(e.background, NULL, ecran, &e.pos_b);
	SDL_Flip(ecran);
	
	SDL_BlitSurface(e.question, NULL, ecran, &e.pos_question);
	SDL_Flip(ecran);
	

	switch(e.positionVraiReponse){
		case 1:

			SDL_BlitSurface(e.reponses[2], NULL, ecran, &e.pos_reponse1txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[0], NULL, ecran, &e.pos_reponse2txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[1], NULL, ecran, &e.pos_reponse3txt);
			SDL_Flip(ecran);
					
		break;

		case 2:

		    SDL_BlitSurface(e.reponses[0], NULL, ecran, &e.pos_reponse1txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[2], NULL, ecran, &e.pos_reponse2txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[1], NULL, ecran, &e.pos_reponse3txt);
			SDL_Flip(ecran);
			
		break;
		
		case 3:
			
			SDL_BlitSurface(e.reponses[0], NULL, ecran, &e.pos_reponse1txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[1], NULL, ecran, &e.pos_reponse2txt);
			SDL_Flip(ecran);
			SDL_BlitSurface(e.reponses[2], NULL, ecran, &e.pos_reponse3txt);
			SDL_Flip(ecran);

		break;
		
	}
	
	SDL_Delay(100);
}

int verify_enigme(enigmetf *e,SDL_Surface*ecran){

	SDL_Rect pos={0,0};
	if(e->positionVraiReponse==e->pos_selected)
	{
		printf("You win\n");
		SDL_Surface *win;
		win=IMG_Load("youwin.png");
		SDL_BlitSurface(win, NULL, ecran,&pos);
		SDL_Flip(ecran);
		return 1;

	}
	else
	{
		SDL_Surface *lost;
		lost=IMG_Load("youlose.png");
		SDL_BlitSurface(lost, NULL, ecran, &pos);
		SDL_Flip(ecran);
		printf("You lost\n");
		return 0;
	}
	SDL_Delay(2000);

}

void free_Surface_enigme(enigmetf e){

	SDL_FreeSurface(e.background);
	SDL_FreeSurface(e.question);
	SDL_FreeSurface(e.reponses[0]);
	SDL_FreeSurface(e.reponses[1]);
	SDL_FreeSurface(e.reponses[2]);

}



void saveScore(ScoreInfo s, char *fileName) {
    FILE *file = fopen(fileName, "a");
    if (file != NULL) {
        fprintf(file, "%d %d %s\n", s.score, s.temps, s.playerName);
        fclose(file);
    }
}

void bestScore(char *filename, ScoreInfo trois[]) {
    FILE *file = fopen(filename, "r");
    int count = 0;
    ScoreInfo tmp;
    while (fscanf(file, "%d %d %s", &tmp.score, &tmp.temps, tmp.playerName) == 3 && count < 3) {
        trois[count] = tmp;
        count++;
    }
    fclose(file);

    int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (trois[j].score > trois[i].score || (trois[j].score == trois[i].score && trois[j].temps < trois[i].temps)) {
                ScoreInfo tmp = trois[i];
                trois[i] = trois[j];
                trois[j] = tmp;
            }
        }
    } 
	
}

void afficherBest(SDL_Surface *screen, ScoreInfo trois[]) {
	bestScore("scores.txt",trois) ;

	SDL_Surface *txt1;
	SDL_Rect pos1={380,200};
	SDL_Surface *txt2;
	SDL_Rect pos2={380,300};
	SDL_Surface *txt3;
	SDL_Rect pos3={380,400};
    SDL_Color blanc = {255, 255, 255};
	TTF_Font *police= TTF_OpenFont("font.ttf", 60); 
    char ch1[50], ch2[50], ch3[50];

    sprintf(ch1, "first: %d",trois[0].score);
    sprintf(ch2, "second: %d", trois[1].score);
    sprintf(ch3, "third: %d", trois[2].score);


    txt1 = TTF_RenderText_Blended(police, ch1, blanc);
	SDL_BlitSurface(txt1, NULL, screen, &pos1);
	SDL_Flip(screen);
    txt2 = TTF_RenderText_Blended(police, ch2, blanc);
    SDL_BlitSurface(txt2, NULL, screen, &pos2);
	SDL_Flip(screen);
    txt3 = TTF_RenderText_Blended(police, ch3, blanc);
	SDL_BlitSurface(txt3, NULL, screen, &pos3);
	SDL_Flip(screen);


  
}











































































