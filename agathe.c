//
// Created by agath on 07/09/2023.
//

// Créez une fonction pour calculer la taxe à payer en fonction du revenu annuel
//(30% si les revenus sont supérieurs à 15 000$, 50% si les revenus sont
//supérieur à 50 000$, 10% sinon)

#include <stdio.h>

double taxes (double revenus) {
    double taxe ;
    printf ("Quel est votre revenu annuel ?\n");
    scanf ("%lf",&revenus) ;
    if (revenus > 15000) {
        taxe = revenus * 1.3 - revenus ;
    } else if (revenus > 50000) {
        taxe = revenus * 1.5- revenus;
    } else{
        taxe = revenus * 1.1- revenus; }
    printf ("La taxe à payer est de %.2lf euros.\n", taxe); }

//Créez une fonction pour retourner l'âge d'un utilisateur en fonction de son
//année de naissance

int ages (int age){
    int year ;
    printf ("Quelle est votre année de naissance ?\n");
    scanf ("%d",year) ;
    age = 2023 - year ;
    printf("Vous avez %d ans.\n", age) ; }