#include <stdio.h>

int main(){
    double requiredCement;
    double oneBagCement = 120;
    int oneBagPrice = 45;
    double requiredBag;
    int requiredBagInt;
    scanf("%lf", &requiredCement);
    requiredBag = requiredCement/oneBagCement;
    requiredBagInt = (int) requiredBag;
    // printf("%d", requiredBagInt + 1);
    printf("%d", oneBagPrice *(requiredBagInt + 1));
    return 0;
}

