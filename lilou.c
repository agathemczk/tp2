
char work(int activity){
    //char code_fiscal;
    int bucheron;
    int comptable;
    int others;

    if (activity == 5){
        return 'B';
    }else if (activity == 2){
        return 'C';
    }else if (activity==1 || activity==3 || activity==4){
        return 'A';
    }
}

float revenu_mensuel(float revenu_annuel){
    return revenu_annuel/12;
}