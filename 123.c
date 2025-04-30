#include<stdio.h>

void A(int array[], int size);
void printarray(int ar[], int size);

int main() {
    int AR[] = {3, 7, 4, 8, 11, 10, 30};
    int size = sizeof(AR) / sizeof(AR[0]);
    
    printf("Sorted array:");
    A(AR, size);
    printarray(AR, size);

    return 0;
}

// A() function to sort array in mountain order
void A(int array[], int size) {
    int item, i, j, z;
    if(size % 2 == 0) {
        z = size / 2;
    } else {
        z = (size + 1) / 2;
    }
    
    // Sort first half in ascending order
    for(i = 0; i < z - 1; i++) {
        for(j = 0; j < z - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                item = array[j];
                array[j] = array[j + 1];
                array[j + 1] = item;
            }
        }
    }

    // Sort second half in descending order
    for(i = z; i < size - 1; i++) {
        for(j = z; j < size - (i - z) - 1; j++) {
            if(array[j] < array[j + 1]) {
                item = array[j];
                array[j] = array[j + 1];
                array[j + 1] = item;
            }
        }
    }
}

void printarray(int ar[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\n%d", ar[i]);
    }
}
