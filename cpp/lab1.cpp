#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size_of_strings;
    printf("Enter the number of strings you want: ");
    scanf("%d", &size_of_strings);

    char** my_arr = (char**)malloc(size_of_strings * sizeof(char*));
    for (int i = 0; i < size_of_strings; i++) {
        char temp[100];
        printf("Enter string %d: ", i + 1);
        scanf("%s", temp);
        my_arr[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(my_arr[i], temp);
    }

    printf("The strings you entered are:\n");
    for (int i = 0; i < size_of_strings; i++) {
        printf("%s\n", my_arr[i]);
    }

    // Deallocate memory
    for (int i = 0; i < size_of_strings; i++) {
        free(my_arr[i]);
    }
    free(my_arr);

    return 0;
}
