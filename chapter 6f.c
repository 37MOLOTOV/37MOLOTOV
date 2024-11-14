#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Record;

// Function to swap two records
void swap(Record *a, Record *b) {
    Record temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort function to sort records by id
void bubbleSort(Record arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j].id > arr[j+1].id) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    Record records[5] = {
        {3, "Alex"},
        {1, "Boniface"},
        {5, "Charles"},
        {2, "Steve"},
        {4, "Evan"}
    };

    int n = 5;

    // Sorting records by id
    bubbleSort(records, n);

    // Printing sorted records
    printf("Sorted records by ID:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
