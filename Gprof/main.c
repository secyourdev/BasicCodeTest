#include <stdio.h>
#include <unistd.h>
#include "max.h"
#include "min.h"
#include "multi.h"
#include "div.h"
#include "mod.h"

int main(void) {
   int l_iChoix = 0;
   int l_iValeur1;
   int l_iValeur2;
   int l_iResultat;
   while(l_iChoix != 10) {
      printf("\e[1;1H\e[2J");
      printf("Logiciel basique de test pour la sécurité\n");  	
      printf("Calcul du min : 1\n");  
      printf("Calcul du max : 2\n"); 
      printf("Multiplication : 3\n"); 
      printf("Division : 4\n"); 
      printf("Modulo : 5\n"); 
      printf("Quitter : 10\n");
      printf("Veuillez choisir la fonction que vous désirez : "); 
      scanf("%d", &l_iChoix); 
      printf("\n");
      switch(l_iChoix) {
	       case 1 : 
		   printf("\e[1;1H\e[2J");
		   printf("Calcul du min \n");
		   printf("Saisir première valeur : ");
      		   scanf("%d", &l_iValeur1); 
		   printf("\nSaisir deuxième valeur : ");
      		   scanf("%d", &l_iValeur2); 
		   l_iResultat= min(l_iValeur1,l_iValeur2);
		   printf("\n Le min de %d et %d vaut : %d\n",l_iValeur1,l_iValeur2,l_iResultat);
		   printf("\nTapez 10 pour quitter : ");
      		   scanf("%d", &l_iResultat); 	
	       break;
	       case 2 : 
		   printf("\e[1;1H\e[2J");
		   printf("Calcul du max \n");
		   printf("Saisir première valeur : ");
      		   scanf("%d", &l_iValeur1); 
		   printf("\nSaisir deuxième valeur : ");
      		   scanf("%d", &l_iValeur2); 
		   l_iResultat= max(l_iValeur1,l_iValeur2);
		   printf("\n Le max de %d et %d vaut : %d\n",l_iValeur1,l_iValeur2,l_iResultat);
		   printf("\nTapez 10 pour quitter : ");
      		   scanf("%d", &l_iResultat); 		
	       break;
	       case 3 : 
		   printf("\e[1;1H\e[2J");
		   printf("Calcul de la multiplication \n");
		   printf("Saisir première valeur : ");
      		   scanf("%d", &l_iValeur1); 
		   printf("\nSaisir deuxième valeur : ");
      		   scanf("%d", &l_iValeur2); 
		   l_iResultat= multi(l_iValeur1,l_iValeur2);
		   printf("\n La multiplication de %d et %d vaut : %d\n",l_iValeur1,l_iValeur2,l_iResultat);
		   printf("\nTapez 10 pour quitter : ");
      		   scanf("%d", &l_iResultat); 			
	       break;
	       case 4 : 
		   printf("\e[1;1H\e[2J");
		   printf("Calcul de la division de a par b \n");
		   printf("Saisir valeur de a : ");
      		   scanf("%d", &l_iValeur1); 
		   printf("\nSaisir valeur de b : ");
      		   scanf("%d", &l_iValeur2); 
		   l_iResultat= div(l_iValeur1,l_iValeur2);
		   printf("\n La division de %d par %d vaut : %d\n",l_iValeur1,l_iValeur2,l_iResultat);
		   printf("\nTapez 10 pour quitter : ");
      		   scanf("%d", &l_iResultat); 	
	       break;
	       case 5 : 
		   printf("\e[1;1H\e[2J");
		   printf("Calcul de a modulo b \n");
		   printf("Saisir valeur de a : ");
      		   scanf("%d", &l_iValeur1); 
		   printf("\nSaisir valeur de b : ");
      		   scanf("%d", &l_iValeur2); 
		   l_iResultat= mod(l_iValeur1,l_iValeur2);
		   printf("\n Le modulo de %d par %d vaut : %d\n",l_iValeur1,l_iValeur2,l_iResultat);
		   printf("\nTapez 10 pour quitter : ");
      		   scanf("%d", &l_iResultat); 			
	       break;
	       default :
		   printf("\e[1;1H\e[2J");
		   printf("Choix non défini : %d \n",l_iChoix);
		   sleep(1);		
       }
   }

}
