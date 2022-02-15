#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int but;
    while(1)
    {
    printf("1. Cola\n2. Pepsi\n3. Fanta\n4. Sprite\nSelectati bautura dorita:\n");
    scanf("%d",&but);

    switch(but)
    {

        case 1:
        printf("Va rugam sa ridicati Cola dvs.");
    break;
        case 2:
        printf("Va rugam sa ridicati Pepsi dvs.");
    break;
        case 3:
        printf("Va rugam sa ridicati Fanta dvs.");
    break;
        case 4:
        printf("Va rugam sa ridicati Sprite dvs.");
    break;
        default:
            printf("Eroare!");
        break;
    }
    getchar();
    getchar();
    system("cls");
    }

    return 0;