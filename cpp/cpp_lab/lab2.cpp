#include<iostream>

namespace DynamicAlloc{
    int** create2DArray(int row , int col){
        int **array = new int*[row];
        for (int i = 0; i < row; i++) {
            array[i] = new int[col];
        }
        return array;
    }
    void delete2DArray(int** ptr){
        delete[] ptr;
    }
}
int main(){
    // Test the create2DArray function
    int row = 3;
    int col = 4;
    int** array = DynamicAlloc::create2DArray(row, col);

    // Fill the array
    int count = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array[i][j] = count++;
        }
    }

    // Print the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Delete the array
    DynamicAlloc::delete2DArray(array);

    return 0;
}