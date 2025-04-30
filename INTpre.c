#include <stdio.h>
#include <string.h>

void index(char *str); // Function prototype

int main() {
    char str[100]; // Array to hold the string
    printf("Enter a string: ");
    scanf("%s", str); // Use %s to read a string
    index(str); // Pass the string to the function
    return 0;
}

void index(char *str) {
    int size = strlen(str); // Get the length of the string
    int foundDuplicate = 0; // Flag to track duplicates

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Start j from i + 1
            if (str[i] == str[j]) { // Use == for comparison
                printf("%d ", i);
                foundDuplicate = 1; // Set flag if a duplicate is found
                break; // Break after finding a duplicate
            }
        }
    }

    if (!foundDuplicate) {
        printf("There's no repeated elements, so your answer is: -1\n");
    }
}
