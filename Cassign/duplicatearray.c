#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

int main() {
    char *strings[MAX_SIZE] = {"apple", "banana", "orange", "apple", "grape", "banana"};
    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Duplicate strings in the array:\n");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break;  // Break inner loop to avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
