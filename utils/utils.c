#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

void clearScreen() {
        system("clear"); 
}

/* funciton that adds to the food item list available */
void addItem(Item list[], int *itemCount) {
    char name[20];
    float cost;

    printf("Input Name: ");
    scanf("%19s", list[*itemCount].name);

    printf("Input Cost: ");
    scanf("%f", &cost);
    list[*itemCount].cost = cost;

    *itemCount = *itemCount + 1;
}

/* removes the last item from the list of items */
void removeItem(Item list[], int *itemCount) {
    if(*itemCount > 0) {
        *itemCount = *itemCount - 1;;
        list[*itemCount] = (Item){'\0'};
    }
}


/* loop function that displays all the current items in inventory */
void printItems(Item list[], int *itemCount) {
    
    printf("%-15s %8s\n", "Name", "Cost");

    for (int i = 0; i < *itemCount; i++) {
        printf("%-15s $%7.2f\n", 
            list[i].name, 
            list[i].cost);
        }
}