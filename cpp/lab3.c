#include <stdio.h>
#include <stdlib.h>

int* CallBackFunc(int** arr_2d, size_t arr_size, int* row_sizes, int* (*func)(int*, int));

int* sum(int* arr, int size);
int* max(int* arr, int size);

int* CallBackFunc(int** arr_2d, size_t arr_size, int* row_sizes, int* (*func)(int*, int)) {
    int* result = (int*)malloc(arr_size * sizeof(int));
    for (size_t i = 0; i < arr_size; i++) {
        int* temp_result = func(arr_2d[i], row_sizes[i]);
        result[i] = *temp_result;
        free(temp_result);
    }
    return result;
}

int* sum(int* arr, int size) {
    int* result = (int*)malloc(sizeof(int));
    *result = 0;
    for (int i = 0; i < size; i++) {
        *result += arr[i];
    }
    return result;
}

int* max(int* arr, int size) {
    int* result = (int*)malloc(sizeof(int));
    *result = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *result) {
            *result = arr[i];
        }
    }
    return result;
}

int main() {
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};

    int row_sizes[5] = {5, 5, 5, 5, 5};

    int* arr_ptrs[5];
    for (int i = 0; i < 5; i++) {
        arr_ptrs[i] = arr[i];
    }

    int* result = CallBackFunc(arr_ptrs, 5, row_sizes, sum);
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    result = CallBackFunc(arr_ptrs, 5, row_sizes, max);
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}
