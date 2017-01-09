#include <stdio.h>

int main()
{
    int number, new_number = 0;
    printf("Please enter a two-digit number: \n");

    scanf("%d", &number);

    while(number != 0)
    {
	new_number = new_number * 10 + number % 10;
	number = number/10;
    }

    printf("The result is: %d", new_number);

    return 0;
}
