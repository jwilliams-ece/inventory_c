#include <stdio.h>

#include "../utils/utils.h"
#include "inventory_menu.h"

#define MAX_SIZE 10

/*This is the main inventory menu layout*/


typedef struct
{
    char *name;
    float cost;

} Item;

Item foodList[MAX_SIZE];
int itemCount = 0;


/* funciton that adds to the food item list available*/
void addItem(char name[], float cost) {
    foodList[itemCount] = (Item){name,cost};
    itemCount++;
}

/* loop function that displays all the current items in inventory*/

void printItems(Item *list) {
    
    printf("%-15s %8s\n", "Name", "Cost");

    for (int i = 0; i < itemCount; i++) {
        printf("%-15s $%7.2f\n", 
            list[i].name, 
            list[i].cost);
        }
}
      
int inventoryMenu() {

    addItem("Apple", 1.0);
    addItem("BANANA", .5);

    int input;

    printf("====INVENTORY MENU=================\r\n\r\n\r\n");
    printf("This is the current inventory      \n\n\n");
    printItems(foodList);
    printf("===================================\n\n");

    printf("Continue: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        clearScreen();
        inventoryMenu();
        break;
    
    default:
        printf("Invalid Input.\n");
        break;
    }
}


