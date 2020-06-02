/*! \file min.c
    \author secyourdev
    \brief Ce fichier contient la définition de la fonction min.
    \version 1.0
    \date 19 mai 2020
 */

/*! \fn int min(int a, int b)
    \brief La fonction trouve le min des deux paramètres.
    \param a Premier entier.
    \param b Second entier.
    \return Le min des paramètres a et b.
 */
int min(int a, int b) {
    if (a<b)
        return a;
    else
        return b;
}
