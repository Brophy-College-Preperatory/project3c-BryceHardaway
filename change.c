#include <stdio.h>

int main(void){
    
    int amt;
    int loop = 10;

    while (loop == 10)
    {
        
        printf("\nHow much change?(enter as a whole number) ");
        scanf("%d", &amt);

        if (amt < 100) {
            break;
        }
        if (amt >= 100) {
            printf("The amount you entered is above $1.00");
        }
    }
    


        int quarters = amt / 25;
        amt %= 25;
        int nickles = amt / 5;
        amt %= 5;
        int dimes = amt / 10;
        amt %= 10;
        int pennies = amt;
        amt %= amt;

        int totalcoins = pennies + quarters + nickles + dimes;

        printf("Quarters: %d\n", quarters);
        printf("Dimes: %d\n", dimes);
        printf("Nickles: %d\n", nickles);
        printf("Pennies: %d\n", pennies);
        printf("Total coins: %d\n", totalcoins);

    return 0;
}