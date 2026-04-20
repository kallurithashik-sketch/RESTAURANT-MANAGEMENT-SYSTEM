#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure for menu items
struct Item {
    int id;
    char name[50];
    float price;
};

// Structure for order
struct Order {
    int itemId;
    int quantity;
};

// Menu list
struct Item menu[] = {
    {1, "Andhra fry piece biryani", 250},
    {2, "Mutton biryani", 420},
    {3, "Chicken manchurian", 200},
    {4, "Paneer fried rice", 180},
    {5, "Lemon mojito", 120}
};

int menuSize = 5;

// Function to display menu
void showMenu() {
    printf("\n------ MENU ------\n");
    for(int i = 0; i < menuSize; i++) {
        printf("%d. %s - Rs %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
}

// Function to find item price
float getPrice(int id) {
    for(int i = 0; i < menuSize; i++) {
        if(menu[i].id == id)
            return menu[i].price;
    }
    return 0;
}

// Function to find item name
char* getName(int id) {
    for(int i = 0; i < menuSize; i++) {
        if(menu[i].id == id)
            return menu[i].name;
    }
    return "";
}

// Main function
int main() {
    struct Order orders[MAX];
    int count = 0;
    int choice;

    while(1) {
        printf("\n--- Restaurant Management ---\n");
        printf("1. Show Menu\n");
        printf("2. Add Order\n");
        printf("3. View Bill\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                showMenu();
                break;

            case 2:
                showMenu();
                printf("Enter item ID: ");
                scanf("%d", &orders[count].itemId);
                printf("Enter quantity: ");
                scanf("%d", &orders[count].quantity);
                count++;
                printf("Order added!\n");
                break;

            case 3: {
                float total = 0;
                printf("\n------ BILL ------\n");
                for(int i = 0; i < count; i++) {
                    float price = getPrice(orders[i].itemId);
                    float amount = price * orders[i].quantity;
                    printf("%s x%d = Rs %.2f\n",
                           getName(orders[i].itemId),
                           orders[i].quantity,
                           amount);
                    total += amount;
                }
                printf("------------------\n");
                printf("Total = Rs %.2f\n", total);

                // Save bill to file
                FILE *file = fopen("bill.txt", "w");
                if(file != NULL) {
                    fprintf(file, "Total Bill: Rs %.2f", total);
                    fclose(file);
                }

                break;
            }

            case 4:
                printf("Thank you!\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}