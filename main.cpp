#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

void menu() {
    printf("1- Input Values\n");
    printf("2- Display Array\n");
    printf("3- Maximum Value\n");
    printf("4- Minimum Value\n");
    printf("5- Calculate Average\n");
    printf("6- Enter into file\n");
    printf("7- Read file\n");
    printf("8- Stop Program\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int choice = 0;

    while(choice != 8){
        menu();
        printf("Select program: \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
        }
    }
    return 0;
}
