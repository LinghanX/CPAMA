#include <stdio.h>

int main()
{ 
    int month, date, year;
    printf("Please input date using form mm/dd/yyyy.\n");

    scanf("%d/%d/%d", &month, &date, &year);

    printf("%4d%.2d%.2d", year, month, date);
    return 0;
}
