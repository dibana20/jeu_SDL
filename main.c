#include "background.h"

int main()
{
	SDL_Surface *screen;
	SDL_Event event;
	Background b;
	Uint32 prev, dt,temps;
	personne p;
	personne2 p2;
	ScoreInfo s,trois[3];

	
   Mix_Music *music;
 
	int loop=1,collision,jump=0;

    if (SDL_Init (SDL_INIT_VIDEO|SDL_INIT_AUDIO | SDL_INIT_TIMER)!=0){
    printf("Could not initialize SDL: %s.\n", SDL_GetError());
    return 1;}
  
  screen=SDL_SetVideoMode(1090,668,32,SDL_SWSURFACE|SDL_DOUBLEBUF);
initialiser_audio (music);

	
	init_back(&b);
	initPerso(&p);
   initPerso2(&p2);

while(loop){

prev = SDL_GetTicks();
afficher_back(screen,b); 
animerBack (&b);
afficheranim(b,screen);
afficherPerso(p, screen);
afficherPerso2(p2, screen);




int KeysHeld[323]= {0};
while (SDL_PollEvent(&event))
        {

            switch (event.type)
            {
            case SDL_QUIT:
                loop=0;
                break;
           case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_RIGHT:
                    p.direction = 0;
					 break;
				case SDLK_d:
                    p2.direction = 0;
					break;
				 case SDLK_a:
                    p2.direction = 1;
					break;
                 case SDLK_w:
                    if (p2.up == 0)
                    {
                        p2.jump_V = -p2.jump_height;
                        p2.up = 1;
                    }
                    break;
                case SDLK_LEFT:
                    p.direction = 1;
                    break;
                case SDLK_UP:
 
                    jump=1;
                    break;
           
                case SDLK_SPACE:
                    if (p.up == 0)
                    {
                        p.jump_V = -p.jump_height;
                        p.up = 1;
                    }
					
                    break;
				case SDLK_KP_PLUS:
                p.acceleration +=0,005;
                break;
			    case SDLK_KP_MINUS:
                p.acceleration -=0,01;
                break;
				
                }
                break;
            case SDL_KEYUP:
                switch (event.key.keysym.sym)
                {
                case SDLK_RIGHT:
                    if (p.direction==0){
					p.posSprite.x=0;
					p.posSprite.y=0;}
					else{
					p.posSprite.x=0;
					p.posSprite.y=258;}
                    p.direction = -1;
                    break;
                    case SDLK_d:
                    if (p2.direction==0){
					p2.posSprite.x=0;
					p2.posSprite.y=0;}
					else{
					p2.posSprite.x=0;
					p2.posSprite.y=258;}
                    p2.direction = -1;
                    break;
                case SDLK_UP:
                    p.up=0;
                   p2.up=0;
                    break;
                case SDLK_LEFT:
                    if (p.direction==0){
					p.posSprite.x=0;
					p.posSprite.y=0;}
					else{
                    p.posSprite.x=755-p.posSprite.w;
					p.posSprite.y=258;}
                    p.direction = -1;
                    break;
 			   case SDLK_a:
                    if (p2.direction==0){
					p2.posSprite.x=0;
					p2.posSprite.y=0;}
					else{
                    p2.posSprite.x=755-p2.posSprite.w;
					p2.posSprite.y=258;}
                    p2.direction=-1;
                    break;
             
                 }
                break;
            }
        }

if ((p.direction==1) || (p.direction==0)){
movePerso(&p,dt);
animerPerso(&p);}
saut(&p,dt,265);

if ((p2.direction==1) ||( p2.direction==0)){
movePerso2(&p2,dt);
animerPerso2(&p2);}

saut21(&p2,dt,265);

if (jump==1){
saut2(&p,dt);
}


collision=0;

if(p.posPerso.x>=0){
if (collision==0){
	if(p.posPerso.x<272){
	movePerso(&p,dt);}
	else{
	if ((p.posPerso.x>=272) && ((p.posPerso.x+b.camera_pos.x)<1650) && (p.direction== 0)){
	scrolling(&b, 0, p,p2,1);}
	else {
	if ((((p.posPerso.x+b.camera_pos.x) >=272) || (b.camera_pos.x >0)) && (p.direction== 1)){
	scrolling(&b,1,p,p2,1);}}
}
}}
else{
if(p2.posPerso.x>=545){
if (collision==0){
	if(p2.posPerso.x<817){
	movePerso2(&p2,dt);}
	else{
	if ((p2.posPerso.x>=817) && ((p2.posPerso.x+b.camera_pos2.x)<1650) && (p2.direction== 0)){
	scrolling(&b, 0, p,p2,2);}
	else {
	if ((((p2.posPerso.x+b.camera_pos2.x) >=817) || (b.camera_pos2.x >0)) && (p2.direction== 1)){
	scrolling(&b,1,p,p2,2);}}
}
}}}

s.score=250;
s.temps=2;
strcpy(s.playerName,"maram");
saveScore(s, "scores.txt"); 
afficherBest(screen,trois) ;















dt = SDL_GetTicks() - prev;
 
SDL_Flip(screen);
}


free_back(&b);
freePerso(&p);
freePerso2(&p2);
liberer_musique (music); 
SDL_Quit(); 

  return 0;
}






