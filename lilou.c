//
// Created by agath on 07/09/2023.
//

char work(char activity){
    char code_fiscal;
    if (activity == "bucheron"){
        code_fiscal = 'B';
    }else if (activity == "comptable"){
        code_fiscal = 'C';
    }else{
        code_fiscal =  'A';
    }
    return code_fiscal;
}

float revenu_mensuel(float revenu_annuel){
    return revenu_annuel/12;
}