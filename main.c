// Main file to run inventory system
#include <stdio.h>
#include <string.h>

#define SIZE 6

char *message = "Inventory open!";
char *foodItem[SIZE] = {"banana", "apple", "bread", "meat"};
char item[] = "food";
char item_2[] = "food_2";

// int itemCount(char *Item[]){
//     int len = sizeof(*Item) / sizeof(*Item[0]);
//     return len;
// }

void addItem(char item[], char *destination[]) {
    int count = 0;
    
    while(destination[count] != NULL) {
        
        count++;
    }
    destination[count] = item;
}

void removeItem(char *destination[], int size) {
    if (size > 0) {
        destination[size - 1] = NULL;
    }
}


int main()
{
    addItem(item, foodItem);
    addItem(item_2, foodItem);

    removeItem(foodItem, 6);
    removeItem(foodItem, 5);

    int length = sizeof(foodItem) / sizeof(foodItem[0]);

    for (int i = 0; i < length ; i++) {
        printf("%s\n",foodItem[i]);
    }
}