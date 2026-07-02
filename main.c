// Main file to run inventory system
#include <stdio.h>
#include <string.h>

char *message = "Inventory open!";
char *foodItem[6] = {"banana", "apple", "bread", "meat"};
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


int main()
{
    addItem(item, foodItem);
    addItem(item_2, foodItem);

    int length = sizeof(foodItem) / sizeof(foodItem[0]);

    for (int i = 0; i < length - 1; i++) {
        printf("%s\n",foodItem[i]);
    }
}