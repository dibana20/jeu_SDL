#include "fonction.h"





int main()
{

//menu
SDL_Surface *screen;
image IMAGE,IMAGE1,IMAGE2,IMAGE3,IMAGE_BTN1, IMAGE_BTN2,IMAGE_BTN3,IMAGE_BTN4,IMAGE_BTN5,IMAGE_BTN6,IMAGE_BTN7,IMAGE_BTN8,IMAGE_BTN9,IMAGE_BTN10,IMAGE_BTN11,IMAGE_BTN12;
image OPIM, IMAGE_BTNO1, IMAGE_BTNO2,IMAGE_BTNO3,IMAGE_BTNO4,IMAGE_BTNO5,IMAGE_BTNO6,IMAGE_BTNO7,IMAGE_BTNO33,IMAGE_BTNO44,IMAGE_BTNO55,IMAGE_BTNO66;
image PLAY,IMAGE_BTNP;
image credit1,credit2,IMAGE_BTNC1,IMAGE_BTNC;
image choix,choix_BTN1,choix_BTN2;
Mix_Music *music;
Mix_Chunk *mus;
texte txte;
SDL_Event event;
int boucle=1,ev,background=1,arrow=0,arrop=0,i=0,volume=64;

//enemy
Enemy e;
int collision=0,condition=0,explosion=0,distEH,n;

//minimap
minimap m;
Uint32 prev, dt,t;
int collisionpp1=0,collisionpp2=0,collisionpp3=0,collisionpp4=0;

//background
Background b;
ScoreInfo s,trois[3];
image best_score,best_score_BTN1;

//perso
personne p; 
int jump=0;

//back_enigme
enigmetf etf;
char *nomfichier[100];
int enigme=0,resultat;
image city_future,game_over,game_over_BTN1,game_over_BTN2;


if (SDL_Init (SDL_INIT_VIDEO|SDL_INIT_AUDIO | SDL_INIT_TIMER)!=0)
{
printf("Could not initialize SDL: %s.\n", SDL_GetError());
return 1;
}


screen=SDL_SetVideoMode(1090,668,32,SDL_SWSURFACE|SDL_DOUBLEBUF);



//back menu
initialiser_imageBACK3 (&IMAGE3);
initialiser_imageBACK2 (&IMAGE2);
initialiser_imageBACK1 (&IMAGE1);
initialiser_imageBACK (&IMAGE);
initialiser_imageBOUTON1 (&IMAGE_BTN1);
initialiser_imageBOUTON2 (&IMAGE_BTN2);
initialiser_imageBOUTON3 (&IMAGE_BTN3);
initialiser_imageBOUTON4 (&IMAGE_BTN4);
initialiser_imageBOUTON5 (&IMAGE_BTN5);
initialiser_imageBOUTON6 (&IMAGE_BTN6);
initialiser_imageBOUTON7 (&IMAGE_BTN7);
initialiser_imageBOUTON8 (&IMAGE_BTN8);
initialiser_audio (music,&volume);
initialiser_texte (&txte);

//back option
initialiser_imageOPIM (&OPIM);
initialiser_imageBOUTONO1 (&IMAGE_BTNO1);
initialiser_imageBOUTONO2 (&IMAGE_BTNO2);
initialiser_imageBOUTONO3 (&IMAGE_BTNO3);
initialiser_imageBOUTONO4 (&IMAGE_BTNO4);
initialiser_imageBOUTONO5 (&IMAGE_BTNO5);
initialiser_imageBOUTONO6 (&IMAGE_BTNO6);
initialiser_imageBOUTONO7 (&IMAGE_BTNO7);
initialiser_imageBOUTONO33 (&IMAGE_BTNO33);
initialiser_imageBOUTONO44 (&IMAGE_BTNO44);
initialiser_imageBOUTONO55 (&IMAGE_BTNO55);
initialiser_imageBOUTONO66 (&IMAGE_BTNO66);







//back play

initialiser_imageBOUTONP (&IMAGE_BTNP);
t= SDL_GetTicks();
//background
init_back(&b);
//perso
initPerso(&p);
//enemy
initEnnemi(&e);

//minimap
initmap(&m);

//city of the future
initialiser_city_future (&city_future);

//back_enigme
InitEnigme(&etf,&nomfichier[100]);


//back credit1
initialiser_imageCREDIT1(&credit1);
initialiser_imageBOUTONC1 (&IMAGE_BTNC1);

//back credit2
initialiser_imageCREDIT2(&credit2);
initialiser_imageBOUTONC (&IMAGE_BTNC);

//back choix
initialiser_imageCHOIX(&choix);
initialiser_imageCHOIX_BTN1 (&choix_BTN1);
initialiser_imageCHOIX_BTN2 (&choix_BTN2);

//gameover
initialiser_game_over (&game_over);
initialiser_image_game_over_BTN1 (&game_over_BTN1);
initialiser_image_game_over_BTN2 (&game_over_BTN2);

//best_score
initialiser_best_score(&best_score);
initialiser_image_best_score_BTN1 (&best_score_BTN1);

/*
note: 
back1  menu
back2 play (singleplayer/niveau1)
back3 option
back4 premiere page du credit
back5 deusieme page du credit
back6 enigme
back7 page du choix entre multiplayer ou singleplayer
back8 play (multiplayer)
back9 play (singleplayer/niveau1)
back10 play (singleplayer/niveau1)
back11 gameover
back12 city of the future
back13 best score

*/

while (boucle)
{
if (background==1){ 
if (i==4){
i=0;}
if (i==0){
afficher_imageBMP (screen, IMAGE);}
if (i==1){
afficher_imageBMP1 (screen, IMAGE1);}
if (i==2){
afficher_imageBMP2 (screen, IMAGE2);}
if (i==3){
afficher_imageBMP3 (screen, IMAGE3);}
afficher_imageBTN1 (screen, IMAGE_BTN1); 
afficher_imageBTN2 (screen, IMAGE_BTN2); 
afficher_imageBTN3 (screen, IMAGE_BTN3);
afficher_imageBTN4 (screen, IMAGE_BTN4);
if (ev==1){
afficher_imageBTN1 (screen, IMAGE_BTN1); }
if (ev==5){
afficher_imageBTN5 (screen, IMAGE_BTN5);}
if (ev==6){
afficher_imageBTN6 (screen, IMAGE_BTN6);}
if (ev==7){
afficher_imageBTN7 (screen, IMAGE_BTN7);}
if (ev==8){
afficher_imageBTN8 (screen, IMAGE_BTN8);}
afficher_texte (screen, txte);
i++;
}


else{
if (background==3){
afficher_imageOPIM (screen, OPIM);   
afficher_imageBTNO3 (screen, IMAGE_BTNO3);
afficher_imageBTNO4 (screen, IMAGE_BTNO4);
afficher_imageBTNO5 (screen, IMAGE_BTNO5);
afficher_imageBTNO6 (screen, IMAGE_BTNO6);
afficher_imageBTNO7 (screen, IMAGE_BTNO7);

if (ev==11){
afficher_imageBTNO1 (screen, IMAGE_BTNO1);}
if (ev==22){
afficher_imageBTNO2 (screen, IMAGE_BTNO2);}
if (ev==3){
afficher_imageBTNO3 (screen, IMAGE_BTNO3);}
if (ev==33){
afficher_imageBTNO33 (screen, IMAGE_BTNO33);}
if (ev==44){
afficher_imageBTNO44 (screen, IMAGE_BTNO44);}
if (ev==55){
afficher_imageBTNO55 (screen, IMAGE_BTNO55);}
if (ev==66){
afficher_imageBTNO66 (screen, IMAGE_BTNO66);}
}
else{
if (background==2){
	
		prev = SDL_GetTicks();
		afficher_back(screen,b); 
		afficher_best_score_BTN1 (screen,best_score_BTN1);
		animerBack (&b);
		afficheranim(b,screen);
		if (condition==0){
		afficherPerso(p, screen);
		afficherEnnemi(e,screen);}


		afficherminimap(m,screen);
		afficher_imageBTNP (screen, IMAGE_BTNP);
		afficher_temps( t,screen);
		animerMinimap(&m);


		collisionpp1=collisionPP_droite( p.posPerso,m.mas,b.camera_pos);
		collisionpp2=collisionPP_gauche( p.posPerso, m.mas,b.camera_pos);
		collisionpp3=collisionPP_up( p.posPerso, m.mas,b.camera_pos);
		collisionpp4=collisionPP_down( p.posPerso,m.mas,b.camera_pos);

		if (collisionpp1==1 || collisionpp2==1 || collisionpp3==1 || collisionpp4==1){
		if (p.score>0){
		printf("collison\n");
		p.score-=10;
		collisionpp1=0;
		collisionpp2=0;
		collisionpp3=0;
		collisionpp4=0;}
		else{
		background=6;}
		}
	
}

else{
if (background==4){
afficher_imageCREDIT1 (screen, credit1);
afficher_imageBTNC1 (screen, IMAGE_BTNC1);}

else{
if (background==5){
afficher_imageCREDIT2 (screen, credit2);
afficher_imageBTNC (screen, IMAGE_BTNC);}
else{
if (background==6){
afficherEnigme(etf,screen);

}
else{
if (background==12){
afficher_city_future(screen,city_future);
}
else{
if (background==13){
afficher_best_score(screen,best_score);
if (ev==1){
afficherBest(screen,trois);}
}
else{
if (background==11){
afficher_game_over(screen,game_over);
if (ev==1){
afficher_game_over_BTN1 (screen, game_over_BTN1);
}
else{
if (ev==2){
afficher_game_over_BTN2(screen,game_over_BTN2);}
}
}
else{
if (background==7){
afficher_imageCHOIX(screen,choix);
afficher_imageBTNP (screen, IMAGE_BTNP);
if (ev==1){
afficher_imageCHOIX_BTN1 (screen, choix_BTN1);}
else{
if (ev==2){
afficher_imageCHOIX_BTN2 (screen, choix_BTN2);}}}
}
}
}
}}}}}}



if (background==1){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;

		case SDL_MOUSEBUTTONDOWN: 
                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=405 && event.motion.y>=360 && (event.motion.x<=815 && event.motion.x>=685)){           
			ev=5;
			background=7;}

                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=470 && event.motion.y>=425 && (event.motion.x<=815 && event.motion.x>=685)){
            ev=6;
			background=3;}
                        

                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=539 && event.motion.y>=494 && (event.motion.x<=815 && event.motion.x>=685)){
			ev=7;
			background=4;}

                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=614 && event.motion.y>=569 && (event.motion.x<=815 && event.motion.x>=685)){			
			ev=8;
                        boucle=0;} 


			break;

		case SDL_MOUSEMOTION:
			if (event.motion.y<=405 && event.motion.y>=360 && (event.motion.x<=815 && event.motion.x>=685)){
				initialiser_audiobref (mus);
				ev=5;}
            else{
            ev=1;}
		

     
                if (event.motion.y<=470 && event.motion.y>=425 && (event.motion.x<=815 && event.motion.x>=685)){
			initialiser_audiobref (mus);
			ev=6;}
			
                if (event.motion.y<=539 && event.motion.y>=494 && (event.motion.x<=815 && event.motion.x>=685)){
			initialiser_audiobref (mus);
			ev=7;}
         
			
                if (event.motion.y<=614 && event.motion.y>=569 && (event.motion.x<=815 && event.motion.x>=685)){
			initialiser_audiobref (mus);
			ev=8;}
        
			
                break;

		case SDL_KEYDOWN:
		if(event.key.keysym.sym==SDLK_DOWN ){
			if (arrow==0){
			initialiser_audiobref (mus);
			ev=5;
			arrow=1;
			}
			else{
			if (arrow==1){
			initialiser_audiobref (mus);
			ev=6;
			arrow=2;}
			else{
			if (arrow==2){
			initialiser_audiobref (mus);
			ev=7;
			arrow=3;}
			else{
			if (arrow==3){
			initialiser_audiobref (mus);
			ev=8;
			arrow=0;}
			}}}}
		if(event.key.keysym.sym==SDLK_UP ){
			if (arrow==0){
			initialiser_audiobref (mus);
			ev=7;
			arrow=3;}
			else{
			if (arrow==3){
			initialiser_audiobref (mus);
			ev=6;
			arrow=2;}
			else{
			if (arrow==2){
			initialiser_audiobref (mus);
			ev=5;
			arrow=1;}
			else{
			if (arrow==1){
			initialiser_audiobref (mus);
			ev=8;
			arrow=0;}
			}}}}
		if(event.key.keysym.sym==SDLK_SPACE){
			if (arrow==0){
			initialiser_audiobref (mus);
			boucle=0;}
			else{
			if (arrow==1){
			initialiser_audiobref (mus);
			background=2;}
			else{
			if (arrow==2){
			initialiser_audiobref (mus);
			background=3;}}}
			}			
		if(event.key.keysym.sym==SDLK_p ){
			initialiser_audiobref (mus);
			ev=9;
			background=2;}
		if(event.key.keysym.sym==SDLK_o ){ 
			initialiser_audiobref (mus);
   			ev=10;
			background=3;}
		if(event.key.keysym.sym==SDLK_c ){
			initialiser_audiobref (mus);
			ev=11;     
			background=4;}
		if(event.key.keysym.sym==SDLK_e || event.key.keysym.sym==SDLK_ESCAPE){
			initialiser_audiobref (mus);
			ev=12;    
			boucle=0;}

		break;
	}
}	
}

else{
if (background==3){

while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;

		case SDL_MOUSEBUTTONDOWN: 
                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=252 && event.motion.y>=215 && event.motion.x<=473 && 			event.motion.x>=410){
			
            ev=11;
			volume -= 10;
            if (volume < 0) {
            volume = 0;}
            Mix_VolumeMusic(volume);
			
			}

				 if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=252 && event.motion.y>=215 && event.motion.x<=673 && 			event.motion.x>=613){
				
				ev=22;
				volume += 10;
		         if (volume > 128) {
		         volume = 128;}
		         Mix_VolumeMusic(volume);
				}
                        
                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=360 && event.motion.y>=305 && event.motion.x<=530 && event.motion.x>=420){
			ev=33;
			SDL_WM_ToggleFullScreen(screen);
			}
			
		if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=340 && event.motion.y>=291 && event.motion.x<=654 && event.motion.x>=562){
			ev=44;
			
			SDL_WM_ToggleFullScreen(screen);

			}
		if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=450 && event.motion.y>=394 && event.motion.x<=655 && event.motion.x>=418){
                        ev=55;
			
			background=1;}


                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=525 && event.motion.y>=479 && event.motion.x<=657 && event.motion.x>=430){
			ev=66;
    			
                        boucle=0;} 

		
			break;

		case SDL_MOUSEMOTION:

				if (event.motion.y<=252 && event.motion.y>=215 && event.motion.x<=473 &&event.motion.x>=410){
				initialiser_audiobref (mus);
				ev=11;
				}

				 if (event.motion.y<=252 && event.motion.y>=215 && event.motion.x<=673 && event.motion.x>=613){
				initialiser_audiobref (mus);
				ev=22;
				}
		
                if (event.motion.y<=360 && event.motion.y>=305 && event.motion.x<=530 && event.motion.x>=420){
			ev=33;
			initialiser_audiobref (mus);
			}
				else{
			ev=3;}

                if (event.motion.y<=340 && event.motion.y>=291 && event.motion.x<=654 && event.motion.x>=562){
			ev=44;
			initialiser_audiobref (mus);
			}

		if (event.motion.y<=450 && event.motion.y>=394 && event.motion.x<=655 && event.motion.x>=418){
			ev=55;
			initialiser_audiobref (mus);
			}

		if (event.motion.y<=525 && event.motion.y>=479 && event.motion.x<=657 && event.motion.x>=430){
			ev=66;
			initialiser_audiobref (mus);
			}

		
			
                break;

		case SDL_KEYDOWN:
		if(event.key.keysym.sym==SDLK_DOWN ){
			if (arrop==0){
			ev=33;
			initialiser_audiobref (mus);
			arrop=3;}
			else{
			if (arrop==3 || arrop==2){
			ev=55;
			initialiser_audiobref (mus);
			arrop=4;}
			else{
			if (arrop==4){
			ev=66;
			initialiser_audiobref (mus);
			arrop=0;}
			}}}
		if(event.key.keysym.sym==SDLK_UP ){
			if (arrop==0){
			ev=55;
			initialiser_audiobref (mus);
			arrop=4;}
			else{
			if (arrop==4){
			ev=33;
			initialiser_audiobref (mus);
			arrop=3;}
			else{
			if (arrop==3 || arrop==2){
			ev=66;
			initialiser_audiobref (mus);
			arrop=0;}
			}}}

		if(event.key.keysym.sym==SDLK_SPACE){
			if (arrop==0){
			initialiser_audiobref (mus);
			boucle=0;}
			else{
			if (arrop==3){
			initialiser_audiobref (mus);
			SDL_WM_ToggleFullScreen(screen);
			}
			else{
			if (arrop==4){
			initialiser_audiobref (mus);
			background=1;}
			else{
			if (arrop==2){
			initialiser_audiobref (mus);
			SDL_WM_ToggleFullScreen(screen);
			}
			}}}}

		if(event.key.keysym.sym==SDLK_RIGHT){
			if (arrop==3){
			initialiser_audiobref (mus);
			ev=44;
			arrop=2;}}

		if(event.key.keysym.sym==SDLK_LEFT){
			if (arrop==2){
			initialiser_audiobref (mus);
			ev=33;
			arrop=3;}}

		if(event.key.keysym.sym==SDLK_KP_PLUS){
			ev=22;
			 volume += 10;
             if (volume > 128) {
             volume = 128;}
             Mix_VolumeMusic(volume);}
		if(event.key.keysym.sym==SDLK_KP_MINUS){
			ev=11;
			volume -= 10;
            if (volume < 0) {
            volume = 0;}
            Mix_VolumeMusic(volume);}
		if(event.key.keysym.sym==SDLK_f){
			initialiser_audiobref (mus);    
			ev=33;
   			SDL_WM_ToggleFullScreen(screen);}
		if(event.key.keysym.sym==SDLK_n){  
			initialiser_audiobref (mus);  
			ev=44;
			SDL_WM_ToggleFullScreen(screen);}
		if(event.key.keysym.sym==SDLK_h){ 
			initialiser_audiobref (mus);   
			ev=55;
			background=1;}
		if(event.key.keysym.sym==SDLK_e || event.key.keysym.sym==SDLK_ESCAPE){ 
			initialiser_audiobref (mus);   
			ev=66;
			boucle=0;}

		break;

		case SDL_KEYUP:
        if(event.key.keysym.sym==SDLK_KP_PLUS){
			ev=22;}

		if(event.key.keysym.sym==SDLK_KP_MINUS){
			ev=11;}

        break;
	}
}	
}
else{
if (background==2){



	while (SDL_PollEvent(&event))
			{

			    switch (event.type)
			    {

				case SDL_MOUSEBUTTONDOWN: 
								if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=590+IMAGE_BTNP.pos_img_affiche.h && event.motion.y>=590 && event.motion.x<=991+IMAGE_BTNP.pos_img_affiche.w && event.motion.x>=991){
									    
							background=1;}

							if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=688 && event.motion.y>=620 && event.motion.x<=1020 && event.motion.x>=650){
														
											background=13;}
						break;
			    case SDL_QUIT:
			        boucle=0;
			        break;
			   case SDL_KEYDOWN:
			      
			        if  (event.key.keysym.sym==SDLK_RIGHT){
			            p.direction = 0;
			            }
					if  (event.key.keysym.sym==SDLK_ESCAPE){
			            boucle= 0;
			            }
					if  (event.key.keysym.sym==SDLK_h){
						initialiser_audiobref (mus);  
						background=1;
			            }
			        if  (event.key.keysym.sym==SDLK_LEFT){
			            p.direction = 1;
			            }
			        if  (event.key.keysym.sym==SDLK_UP){
			            jump=1;
			            }
			        if  (event.key.keysym.sym==SDLK_DOWN){
			            p.up=0;
			           }
			        if  (event.key.keysym.sym==SDLK_SPACE){
			            if (p.up == 0)
			            {
			                p.jump_V = -p.jump_height;
			                p.up = 1;
			            }}
					if  (event.key.keysym.sym==SDLK_KP_PLUS){
			        p.acceleration +=0,005;
			        }
					if  (event.key.keysym.sym==SDLK_KP_MINUS){
			        p.acceleration -=0,01;
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

					case SDLK_b:
					        background=13;
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
	animerPerso(&p);
	if (p.direction==0){
	p.score+=5;}}
	saut(&p,dt,265);
	MAJMinimap(p.posPerso,&m, b.camera_pos,20);
	MAJMinimap_enemie(e.pos,&m, b.camera_pos,20);

	if (jump==1){
	saut2(&p,dt);
	}
	
	distEH=(e.pos.x)-p.posPerso.x;
	printf("distance: %d\n",distEH);
	updateEnnemiState (&e,distEH);
	updateEnnemi (&e,p.posPerso);


	collision=collisionBB(p,e);


		if (collision==0) {
		if (p.posPerso.x==545){
		p.score+=100;}
		if ((p.posPerso.x>= 545) && ((p.posPerso.x+b.camera_pos.x)<1768) && (p.direction== 0)){
		scrolling(&b, 0, p);}
		else {
		if ((((p.posPerso.x+b.camera_pos.x) >= 545) || (b.camera_pos.x >15)) && p.direction== 1){
		scrolling(&b, 1, p);}}
		}
		else{
		if (collision==1){
		if (p.spritevie.y<=(128-p.spritevie.h)){
		p.spritevie.y+=26;
		}
		else{
		e.posexp.x=p.posPerso.x-35;
		e.posexp.y=p.posPerso.y+20;
		explosion=1;
		condition=1;}
		}}

		if (explosion==1){
		if (e.arret==0){
		animer_explosion(&e);
		afficher_explosion(e,screen);
		}
		else{
		s.score=p.score;
		s.temps=3;
		strcpy(s.playerName,"maram");
		saveScore(s,"scores.txt");
		boucle=0;}
		}



	if ((p.posPerso.x+b.camera_pos.x)>=1768 && collision==0){
	background=6;
	}



	dt = SDL_GetTicks() - prev;
	
	
}

else{
if (background==4){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;
       case SDL_MOUSEBUTTONDOWN: 
		    if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=100 && event.motion.y>=0 && event.motion.x<=1090 && event.motion.x>=1025){
			initialiser_audiobref (mus);
		            
		     background=5;}
	         break;
    }
}}



else{
if (background==7){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;
       case SDL_MOUSEBUTTONDOWN: 
		    if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=choix_BTN1.pos_img_affiche.y+choix_BTN1.pos_img_affiche.h && event.motion.y>=choix_BTN1.pos_img_affiche.y && event.motion.x<=choix_BTN1.pos_img_affiche.x+choix_BTN1.pos_img_affiche.w && event.motion.x>=choix_BTN1.pos_img_affiche.x){
			initialiser_audiobref (mus);
		      ev=1;      
		     background=2;}
			if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=choix_BTN2.pos_img_affiche.y+choix_BTN2.pos_img_affiche.h && event.motion.y>=choix_BTN2.pos_img_affiche.y && event.motion.x<=choix_BTN2.pos_img_affiche.x+choix_BTN2.pos_img_affiche.w && event.motion.x>=choix_BTN2.pos_img_affiche.x){
			initialiser_audiobref (mus);
		      ev=2;      
		     background=8;}

			  if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=590+IMAGE_BTNP.pos_img_affiche.h && event.motion.y>=590 && event.motion.x<=1000+IMAGE_BTNP.pos_img_affiche.w && event.motion.x>=990){
						            
						background=1;}
	         break;
		case SDL_MOUSEMOTION:

				if (event.motion.y<=choix_BTN1.pos_img_affiche.y+choix_BTN1.pos_img_affiche.h && event.motion.y>=choix_BTN1.pos_img_affiche.y && event.motion.x<=choix_BTN1.pos_img_affiche.x+choix_BTN1.pos_img_affiche.w && event.motion.x>=choix_BTN1.pos_img_affiche.x){
		      ev=1;      
		     }
			else{
			ev=0;}
			if (event.motion.y<=choix_BTN2.pos_img_affiche.y+choix_BTN2.pos_img_affiche.h && event.motion.y>=choix_BTN2.pos_img_affiche.y && event.motion.x<=choix_BTN2.pos_img_affiche.x+choix_BTN2.pos_img_affiche.w && event.motion.x>=choix_BTN2.pos_img_affiche.x){
		      ev=2;      
		     }

            break;

		case SDL_KEYDOWN:
		if(event.key.keysym.sym==SDLK_s){
			initialiser_audiobref (mus);
			ev=1;
			background=2;
			}
		else{
			if(event.key.keysym.sym==SDLK_n){
			initialiser_audiobref (mus);
			ev=2;
			background=8;}
			}
			break;
		

    }
}}
else{
if (background==5){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;
       case SDL_MOUSEBUTTONDOWN: 
		    if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=100 && event.motion.y>=0 && event.motion.x<=1090 && event.motion.x>=1025){
			initialiser_audiobref (mus);		            
		     background=1;}
	         break;
    }
}}
else{
if (background==12){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;
    }
}}
else{
if (background==11){
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;

		case SDL_MOUSEBUTTONDOWN: 
                if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=545 && event.motion.y>=486 && (event.motion.x<=537 && event.motion.x>=456)){  
			initialiser_audiobref (mus);         
			ev=1;
			background=2;
			p.posPerso.x=0;
			p.direction=-1;
			p.posPerso.y=265;
			p.score=0;
			b.camera_pos.x=0;}
			
 
			if (event.button.button==SDL_BUTTON_LEFT && event.motion.y<=545 && event.motion.y>=486 && (event.motion.x<=614 && event.motion.x>=533)){  
			initialiser_audiobref (mus);         
			ev=2;
			s.score=p.score;
			s.temps=3;
			strcpy(s.playerName,"maram");
			saveScore(s,"scores.txt");
			boucle=0;}
			break;

	   case SDL_MOUSEMOTION:

			if (event.motion.y<=545 && event.motion.y>=486 && event.motion.x<=537 && event.motion.x>=456){
			initialiser_audiobref (mus);
			ev=1;}
			else{
			ev=0;}
			if (event.motion.y<=545 && event.motion.y>=486 && event.motion.x<=614 && event.motion.x>=533){
			initialiser_audiobref (mus);
			ev=2;
			}
		    break;
		
		case SDL_KEYDOWN:
		if(event.key.keysym.sym==SDLK_y){
			ev=1;
			background=2;
			p.posPerso.x=0;
			p.direction=-1;
			p.posPerso.y=265;
			p.score=0;
			b.camera_pos.x=0;
			}
		else{
			if(event.key.keysym.sym==SDLK_n){
			ev=2;
			s.score=p.score;
			s.temps=3;
			strcpy(s.playerName,"maram");
			saveScore(s,"scores.txt");
			boucle=0;}
			}
			break;

    }
}}
else{
if (background==13){

ev=1;
while (SDL_PollEvent (&event))
{	
	switch (event.type)
	{
		case SDL_QUIT:
			boucle=0;
			break;
       case SDL_KEYDOWN:
		if(event.key.keysym.sym==SDLK_p){
			background=2;
			}
		
			break;
    }
}}
else{
//////////////////////////////////////////////////////////////////////////////////////////////////back6//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (background==6){

while (SDL_PollEvent(&event)) 
		{
			switch (event.type)
			{
				case SDL_QUIT:

					boucle=0;
					break;

				case SDL_MOUSEMOTION:

					printf("Souris en position %d %d\n",event.motion.x, event.motion.y);
					break;

				case SDL_MOUSEBUTTONUP:
				
					if((event.motion.x>429 && event.motion.x<666)&&(event.motion.y>346 && event.motion.y<419))
					{
						etf.pos_selected=1;
						if (event.button.button == SDL_BUTTON_LEFT)
						{
							resultat=verify_enigme(&etf,screen);
							if (resultat==1 ){
							if (p.posPerso.x<545){
							background=2;
							p.posPerso.x=0;
							p.posPerso.y=265;}
							else{
							if(p.posPerso.x>750){
							background=12;}}
							}
							else{
							if (resultat==0){
							background=11;}}
						} 	 
					}
					else if((event.motion.x>139 && event.motion.x<376)&&(event.motion.y>482 && event.motion.y<555))
					{
						etf.pos_selected=2;
						if (event.button.button == SDL_BUTTON_LEFT)
						{
							resultat=verify_enigme(&etf,screen);
							if (resultat==1 ){
							if (p.posPerso.x<545){
							background=2;
							p.posPerso.x=0;
							p.posPerso.y=265;}
							else{
							if(p.posPerso.x>750){
							background=12;}}
							}
							else{
							if (resultat==0){
							background=11;}}
						} 
					}
					else if((event.motion.x>691 && event.motion.x<928)&&(event.motion.y>482 && event.motion.y<555))
					{
						etf.pos_selected=3;
						if (event.button.button == SDL_BUTTON_LEFT)
						{
							resultat=verify_enigme(&etf,screen);
							if (resultat==1 ){
							if (p.posPerso.x<545){
							background=2;
							p.posPerso.x=0;
							p.posPerso.y=265;}
							else{
							if(p.posPerso.x>750){
							background=12;}}
							}
							else{
							if (resultat==0){
							background=11;}}
						} 					
					}
				
				break;
}}
}
}}}}}}}}}
SDL_Flip(screen);
}



liberer_image (IMAGE);
liberer_image (IMAGE1);
liberer_image (IMAGE2);
liberer_image (IMAGE3);
liberer_image (IMAGE_BTN1); 
liberer_image (IMAGE_BTN2);
liberer_image (IMAGE_BTN3);
liberer_image (IMAGE_BTN4);
liberer_image (IMAGE_BTN5);
liberer_image (IMAGE_BTN6);
liberer_image (IMAGE_BTN7);
liberer_image (IMAGE_BTN8);

liberer_image (OPIM);
liberer_image (IMAGE_BTNO1); 
liberer_image (IMAGE_BTNO2);
liberer_image (IMAGE_BTNO3);
liberer_image (IMAGE_BTNO4);
liberer_image (IMAGE_BTNO5);
liberer_image (IMAGE_BTNO6);
liberer_image (IMAGE_BTNO7);
liberer_image (IMAGE_BTNO33);
liberer_image (IMAGE_BTNO44);
liberer_image (IMAGE_BTNO55);
liberer_image (IMAGE_BTNO66);

liberer_image (PLAY);
liberer_image (IMAGE_BTNP);
free_back(&b);
free_enemy(&e);
freePerso(&p);
liberer_mp(&m);
free_Surface_enigme(etf);



liberer_image (credit1);
liberer_image (credit2);
liberer_image (IMAGE_BTNC);
liberer_image (IMAGE_BTNC1);

liberer_image (choix);
liberer_image (choix_BTN1);
liberer_image (choix_BTN2);

liberer_image (city_future);

liberer_image (game_over);
liberer_image (game_over_BTN1);
liberer_image (game_over_BTN2);

liberer_image (best_score);

liberer_musique (music); 
liberer_musiquebref (mus);
liberer_texte (txte);

Mix_CloseAudio();
Mix_Quit();
SDL_Quit();
return 0;
}




