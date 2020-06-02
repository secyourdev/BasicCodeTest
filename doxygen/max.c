/*! \file max.c
    \author secyourdev
    \brief Ce fichier contient la définition de la fonction max.
    \version 1.0
    \date 19 mai 2020
 */

/*! \fn int max(int a, int b)
    \brief La fonction trouve le max des deux paramètres.
    \param a Premier entier.
    \param b Second entier.
    \return Le max des paramètres a et b.
 */
int max(int a, int b){
    if (a>b) 
	return a;
    else 
	return b;
}

