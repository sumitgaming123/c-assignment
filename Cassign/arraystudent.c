#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Comparison function for qsort
int compareNames(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;

    printf("Enter the number of students (up to 10): ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Number of students exceeds maximum limit.\n");
        return 1;
    }

    printf("Enter the names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        scanf("%s", nameOfStudents[i]);
    }

    // Sorting the array of names
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareNames);

    printf("\nSorted names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
