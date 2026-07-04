#include <stdio.h>

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item;
    float totalValue;

    printf("===== Inventory Management System =====\n");

    // Input Item Details
    printf("Enter Item ID: ");
    scanf("%d", &item.itemId);

    printf("Enter Item Name: ");
    scanf("%s", item.itemName);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &item.price);

    // Calculate Total Value
    totalValue = item.quantity * item.price;

    // Display Item Details
    printf("\n===== Inventory Details =====\n");
    printf("Item ID        : %d\n", item.itemId);
    printf("Item Name      : %s\n", item.itemName);
    printf("Quantity       : %d\n", item.quantity);
    printf("Price per Item : %.2f\n", item.price);
    printf("Total Value    : %.2f\n", totalValue);

    if (item.quantity > 0)
        printf("Stock Status   : In Stock\n");
    else
        printf("Stock Status   : Out of Stock\n");

    return 0;
}