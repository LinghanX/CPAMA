#include <stdio.h>

int main()
{ 
    int item_number, month, date, year;
    float unit_price;
    printf("Enter item number: \n");
    scanf("%d", &item_number);
    printf("Enter unit price: \n");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("%-10s%-10s\t%-10s", "Item", "Unit", "Purchase");
    printf("\n");
    printf("%-10s%-10s\t%-10s", "", "Price", "Date");
    printf("\n");
    printf("%-10d$%9.2f\t%.2d/%.2d/%.4d", item_number, unit_price, month, date, year);

    return 0;
}
