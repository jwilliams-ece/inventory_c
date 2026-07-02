#include <stdio.h>
#include <string.h>

#define SIZE 6

typedef struct Item {
    char *name;
    int cost;
    int quantity;
} Item ;
      
Item inventory[SIZE] = {
    {"banana", 3, 10},
    {"apple", 2, 5},
    {"bread", 5, 2},
    {"meat", 12, 1}
};


int main() {

    for(int i = 0; i < SIZE; i++) {
        if (inventory[i].name != NULL) {
            printf("Item: %s Cost: $%d Quantity: %d \n", inventory[i].name, inventory[i].cost, inventory[i].quantity);
        }
    }

}

