#include <stdio.h>

void printHollowTriangle() {
    int i, j;
    // First line
    printf("    *\n");
    // Middle lines
    printf("   * *\n");
    printf("  *   *\n");
    printf(" *     *\n");
    // Last line
    printf("*********\n");
}

void printSolidTriangle() {
    int i, j;
    // Print each row
    for(i = 1; i <= 5; i++) {
        // Print leading spaces
        for(j = 1; j <= 5-i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printInvertedSolidTriangle() {
    int i, j;
    // Print each row
    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(j = 1; j <= 5-i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice;
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printHollowTriangle();
            break;
        case 2:
            printSolidTriangle();
            break;
        case 3:
            printInvertedSolidTriangle();
            break;
    }
    
    return 0;
}