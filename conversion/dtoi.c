#include <stdio.h>

int main(){
    int totalNumbers;
    double expectedNumbers;
    int totalAtEnd = 0;
    printf("Total current population: ");
    scanf("%d", &totalNumbers);
    printf("Total percent increase in population: ");
    scanf("%lf", &expectedNumbers);
    totalAtEnd = (int) totalNumbers * (1 + (expectedNumbers/100));
    printf("Estimated population at end of year: %d", totalAtEnd);
    return 0;
}

