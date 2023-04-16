#include "enemy.h"

int main()
{
  SDL_Surface *screen;
  SDL_Event event;
  image back;
  Enemy e;
  Uint32 prev, dt;
  personne p;
  int boucle=1,jump=0,collision,condition=0,explosion=0;

  if (SDL_Init (SDL_INIT_VIDEO|SDL_INIT_AUDIO | SDL_INIT_TIMER)!=0){
    printf("Could not initialize SDL: %s.\n", SDL_GetError());
    return 1;}
  
  screen=SDL_SetVideoMode(1090,668,32,SDL_SWSURFACE|SDL_DOUBLEBUF);


  init_background(&back);
  if (condition==0){
  initPerso(&p);
  initEnnemi(&e);}

while(boucle){

prev=SDL_GetTicks() ;
afficher_back(screen,back);
if (condition==0){
afficherPerso(p, screen);
afficherEnnemi(e,screen);}
move(&e);
if (e.direction==1 || e.direction==0){
 animerEnnemi(&e);}


collision=collisionBB(p,e);
if (collision==1){
e.posexp.x=p.posPerso.x-35;
e.posexp.y=p.posPerso.y+20;
explosion=1;
condition=1;
}


 while (SDL_PollEvent(&event))
        {

            switch (event.type)
            {
            case SDL_QUIT:
                boucle=0;
                break;
           case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_RIGHT:
                    p.direction = 0;
                    break;

                case SDLK_LEFT:
                    p.direction = 1;
                    break;
                case SDLK_UP:
                    jump=1;
                    break;
                /*case SDLK_DOWN:
                    p.up=0;
                    break;*/
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
                   
                case SDLK_UP:
                    p.up=0;
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
                }
                break;
            }
        }

if (p.direction==1 || p.direction==0){
movePerso(&p,dt);
animerPerso(&p);}

saut(&p,dt,265);
if (jump==1){
saut2(&p,dt);
}
if (explosion==1){
if (e.arret==0){
animer_explosion(&e);
afficher_explosion(e,screen);
}
else{
boucle=0;}
}


dt = SDL_GetTicks() - prev;
SDL_Flip(screen);

}


	SDL_FreeSurface(back.img);
	free_enemy(&e);
    freePerso(&p);
  
  SDL_Quit();
  return 0;
}
