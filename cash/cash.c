#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    } while (change < 0);

    int coins = 0;

    //quarters
    coins += change / 25;
    change %= 25;

    // dimes
    coins += change / 10;
    change %= 10; //

    // Calculate the number of nickels
    coins += change / 5; //
    change %= 5;

    // Calculate the number of pennies
    coins += change;

    // Print the total number of coins
    printf("%d\n", coins);
    return 0; // Exit the program
}

