#include <stdio.h>

int main(){
    double totalMoney;
    double priceOfBook;
    double booksCanBuy;
    int booksCanBuyInt;
    printf("Total Money you have: ");
    scanf("%lf", &totalMoney);
    printf("Total Money of the Book: ");
    scanf("%lf", &priceOfBook);
    booksCanBuy = totalMoney/priceOfBook;
    booksCanBuyInt = (int) booksCanBuy;
    printf("You can buy %d Books in your Money", booksCanBuyInt);
    return 0;
}

