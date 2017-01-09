#include <stdio.h>
void pay_amout(int, int *, int *, int *, int *);

int main(){
    int dollarAmount, twenties, tens, fives, ones;
    printf("Enter a dollar amount: \n");
    scanf("%d", &dollarAmount);
    pay_amout(dollarAmount, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %2d\n", twenties);
    printf("$10 bills: %2d\n", tens);
    printf("$5 bills: %2d\n", fives);
    printf("$1 bills: %2d\n", ones);
}

void pay_amout(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    if(dollars > 20){
	*twenties = dollars / 20;
	dollars = dollars % 20;
	*tens = dollars / 10;
	dollars %= 10;
	*fives = dollars / 5;
	dollars %= 5;
	*ones = dollars;
    } else if(dollars > 10){
	*twenties = 0;
	*tens = dollars / 10;
	dollars %= 10;
	*fives = dollars / 5;
	dollars %= 5;
	*ones = dollars;
    } else if (dollars > 5){
	*twenties = 0;
	*tens = 0;
	*fives = dollars / 5;
	dollars %= 5;
	*ones = dollars;
    } else {
	*twenties = 0;
	*tens = 0;
	*fives = 0;
	*ones = dollars;
    }
}
