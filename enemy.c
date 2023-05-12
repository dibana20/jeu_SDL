#include "enemy.h"


void init_background(image *imge)
{
imge->img=IMG_Load("back.jpg");
if (imge->img==NULL) {
printf("unable to load background image %s \n", SDL_GetError());
return ;}


imge->pos2.x=0;
imge->pos2.y=0;
imge->pos2.w=1090;
imge->pos2.h=668;
}


void afficher_back(SDL_Surface *screen,image imge)
{
SDL_BlitSurface (imge.img,NULL,screen,&imge.pos2);
}



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
    p->posPerso.x =0;
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
    p->jump_height =50;
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



void saut2(personne *p, Uint32 dt) 
{
   
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


















