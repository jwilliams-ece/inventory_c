// Main file to run inventory system
#include <stdio.h>
#include <string.h>

char *message = "Inventory open!";
char *foodItem[6] = {"banana", "apple", "bread", "meat"};
char item[] = "food";
char item_2[] = "food_2";

int itemCount(){

    int count = 0;

    while (foodItem[count] != NULL)
    {
        count++;
    }
    return count;
}

void addItem(char item[]) {
    int count = 0;
    
    while(foodItem[count] != NULL) {
        
        count++;
    }
    foodItem[count] = item;
}

int main()
{
    addItem(item);
    addItem(item_2);

    int len = sizeof(foodItem) / sizeof(foodItem[0]);

    for (int i = 0; i < len - 1; i++) {
        printf("%s\n",foodItem[i]);
    }
}