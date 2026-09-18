#include<stdio.h>

int main(void) {
    int arr[6] = {55, 12, 89, 7, 42, 60};
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i < size; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    // output takes more space then the solution bro
    printf("Array elements: {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    printf("Maximum element: %i\n", max);
    printf("Minnimum elemnt: %i\n", min);
}
