#include<stdio.h>

int main() {
    int input;
    printf("Enter Number: ");
    scanf("%d", &input);

    switch(input) {
        case 1:
            printf("This is 1\n");
            break;
        case 2:
            printf("This is 2\n");
            break;
        case 3:
            printf("This is 3\n");
            break;
        case 4:
            printf("This is 4\n");
            break;
        case 5:
            printf("This is 5\n");
            break;
        case 6:
            printf("This is 6\n");
            break;
        case 7:
            printf("This is 7\n");
            break;
        default:
            printf("This is differ\n");
            break;
        }
    return 0;
}
