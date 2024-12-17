#include <stdio.h>

int main() {
    int raining, far;

    printf("Is it raining? (1 for yes, 0 for no): ");
    scanf("%d", &raining);

    printf("Is it far? (1 for yes, 0 for no): ");
    scanf("%d", &far);

    if (raining == 1) {
        printf("Take umbrella\n");
    } else {
        printf("No umbrella\n");
    }

    if (far == 1) {
        printf("Take bus\n");
    } else {
        printf("Walk\n");
    }

    printf("Arrive at college\n");

    return 0;
}