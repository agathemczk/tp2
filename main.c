#include <stdio.h>
#include "lilou.c"
#include "agathe.c"

int main() {
    int job;
    int years;
    float revenu_annuel;
    char code_fiscal;
    float revenumensuel;
    double taxe;

    printf("Quel est votre metier ? ( 1. agriculteur, 2. comptable, 3. etudiant, 4. fonctionnaire, 5. bucheron)\n");
    scanf("%d", &job);
    printf("Quelle est votre année de naissance ?\n");
    scanf("%d", &years);
    printf("Quel est votre revenu annuel ?\n");
    scanf("%f", &revenu_annuel);

    code_fiscal = work(job);
    years = age(years);
    revenumensuel = revenu_mensuel(revenu_annuel);
    taxe = taxes(revenu_annuel);

    printf("Bienvenue, nos services constatent que vous avez %d ans.\n Vous devrez payer cette annee %.2lf euros.\n Votre code d activite est %c.\n Votre revenu mensuel est de %.2f euros.\n",years,taxe,code_fiscal,revenumensuel);

    return 0;
}


