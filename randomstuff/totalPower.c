#include <stdio.h>

int main() {
    int numberOfBots = 0;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int i;
    int totalPower = 0;
    int singleBotPower = 0;
    
    scanf("%d", &numberOfBots);
    for (i = 0; i < numberOfBots; i++) {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        singleBotPower = (enginePower + resistance) * (weight - height);
        totalPower = totalPower + singleBotPower;
    }
    printf("%d", totalPower);
    return 0;
}
