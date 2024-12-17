#include <stdio.h>

int findSecondHighest(int arr[], int size) {
    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondHighest = findSecondHighest(arr, size);

    printf("Second highest value: %d\n", secondHighest);

    return 0;
}