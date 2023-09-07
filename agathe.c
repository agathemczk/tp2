//
// Created by agath on 07/09/2023.
//


#include <stdio.h>

double taxes (float revenus) {
    double taxe ;
    if (revenus >= 15000 && revenus < 50000) {
        taxe = revenus * 1.3 - revenus ;
    } else if (revenus >= 50000) {
        taxe = revenus * 1.5- revenus;
    } else{
        taxe = revenus * 1.1- revenus; }
    return taxe ;
    }


int ages (int age){
    int year ;
    age = 2023 - year ;
    return age; }
