
#include <stdio.h>

char work(int activity){
    char code_fiscal;
    if (activity == 5){
        code_fiscal = 'B';
    }else if (activity == 2){
        code_fiscal = 'C';
    }else{
        code_fiscal =  'A';
    }
    return code_fiscal;
}

float revenu_mensuel(float revenu_annuel){
    return revenu_annuel/12;
}