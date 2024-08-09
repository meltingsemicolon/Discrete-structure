//Wap in c to implement fuzzy set operations

#include <stdio.h>
#include <stdlib.h>

// Function to perform Fuzzy Union operation
void fuzzy_union(float set1[], float set2[], int size) {
    printf("Fuzzy Union: ");
    for (int i = 0; i < size; i++) {
        if (set1[i] > set2[i]) {
            printf("%.2f ", set1[i]);
        } else {
            printf("%.2f ", set2[i]);
        }
    }
    printf("\n");
}

// Function to perform Fuzzy Intersection operation
void fuzzy_intersection(float set1[], float set2[], int size) {
    printf("Fuzzy Intersection: ");
    for (int i = 0; i < size; i++) {
        if (set1[i] < set2[i]) {
            printf("%.2f ", set1[i]);
        } else {
            printf("%.2f ", set2[i]);
        }
    }
    printf("\n");
}

// Function to perform Fuzzy Complement operation
void fuzzy_complement(float set[], int size) {
    printf("Fuzzy Complement: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", 1 - set[i]);
    }
    printf("\n");
}

int main() {
    // Size of the sets
    int size;

    printf("Enter the size of the sets: ");
    scanf("%d", &size);

float *set1 = (float *)malloc(size * sizeof(float));
    float *set2 = (float *)malloc(size * sizeof(float));

    printf("Enter elements of Set 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &set1[i]);
    }

    printf("Enter elements of Set 2: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &set2[i]);
    }

    fuzzy_union(set1, set2, size);
    fuzzy_intersection(set1, set2, size);
    fuzzy_complement(set1, size);

    return 0;
}
