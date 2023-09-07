//
// Created by agath on 07/09/2023.
//


#include <stdio.h>

double taxes (float revenus) {
    double TAXE ;
    if (revenus >= 15000 && revenus < 50000) {
        TAXE = revenus * 1.3 - revenus ;
    } else if (revenus >= 50000) {
        TAXE = revenus * 1.5- revenus;
    } else{
        TAXE = revenus * 1.1- revenus; }
    return TAXE ;
    }


int ages (int age){
    int years ;
    age = 2023 - years ;
    return age; }
