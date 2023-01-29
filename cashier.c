#include <stdio.h> //import standard input/output in default c library
// recall a function because the function is below main function
int get_money(void);
int calculate_seratusrb(int money);
int calculate_dimes(int money);
int calculate_duapuluhrb(int money);
int calculate_pennies(int money);
// a main function
int main(void)
{
    // Ask how many money the gcustomer is owed
    int money = get_money();

    // Calculate the number of seratusrb to give the customer
    int seratusrb = calculate_seratusrb(money);
    money = money - seratusrb * 100'000;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(money);
    money = money - dimes * 10;

    // Calculate the number of duapuluhrb to give the customer
    int duapuluhrb = calculate_duapuluhrb(money);
    money = money - duapuluhrb * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(money);
    money = money - pennies * 1;

    // Sum coins
    int coins = seratusrb + dimes + duapuluhrb + pennies;

    // Print total number of coins to give the customer
    printf("Your amount of return is : %i\n", coins);
    printf("which the amount of quarter is %i, dimes %i, nickles %i, pennies %i\n",seratusrb,dimes,duapuluhrb,pennies);
}

// some function 
int get_money(void)
{
    int money;                                  // initialize variable type before using loop
    do
    {
        printf("Change owed : ");
        scanf("%d",&money);      //use get_int from <cs50.h> library to catch promp user input
    }
    while (money < 0);                          //give condition <0 so t10hat it will prompt again while condition is true
    return money;                               //return variable money for function get_money with no parameter (void)
}

int calculate_seratusrb(int money)
{
    int seratusrb = 0;                           //initialize variable type before loop and it's start value (from 0) for counting seratusrb
    while (money >= 100'000)                         //use while loop with condition greater than equal 100'000 so that code inside while loop wil be looped until condition become false
    {
        money = money - 100'000;                     //update current money by subtract by value of quarter (100'000)
        seratusrb = seratusrb + 1;                //update current amount of money by adding by 1
    }                                           //recheck while block until condition become false
    return seratusrb;                            //and store final counted seratusrb by return counted seratusrb to calculate_quarter function
}

int calculate_dimes(int money)
{
    int dimes = 0;                              //same as quarter, except
    while (money >= 10)                         //condition to be looped is greater than equals 10 because the value of dimes
    {
        money = money - 10;
        dimes = dimes + 1;
    }
    return dimes;
}

int calculate_duapuluhrb(int money)
{
    int duapuluhrb = 0;                            //same as quarter, except
    while (money >= 5)                          //conditon to be looped is greater than equals 5 because the value of duapuluhrb
    {
        money = money - 5;
        duapuluhrb = duapuluhrb + 1;
    }
    return duapuluhrb;
}

int calculate_pennies(int money)
{
    int pennies = 0;                            //same as quarter, except
    while (money >= 1)                          //condition to be looped is greater than equals 1 because the value of pennies
    {
        money = money - 1;
        pennies = pennies + 1;
    }
    return pennies;
}