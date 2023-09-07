int age(int years) {
    return 2023 - years; }


double taxes(float revenus) {
    if (revenus >= 15000 && revenus < 50000) {
        return revenus * 1.3 - revenus ;
    } else if (revenus >= 50000) {
        return revenus * 1.5- revenus;
    } else{
        return revenus * 1.1- revenus; }
}
