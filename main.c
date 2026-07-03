/* This will function as the title/menu screen for the program */

#include <stdio.h>

int input;

int main() {
    printf("====MAIN MENU======================\n\n\n");
    printf("This is an inventory storage system\n\n\n");
    printf("===================================\n\n");

    printf("Continue: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", input);

    switch (input)
    {
    case 0:
        /* code */
        break;
    case 1:
        break;
    
    default:
        break;
    }
}
