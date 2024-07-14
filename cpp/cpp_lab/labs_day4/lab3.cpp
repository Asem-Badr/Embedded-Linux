#include <iostream>
#include <vector>

std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    std::vector<std::vector<int>> result(col, std::vector<int>(row));
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

void print_matrix(std::vector<std::vector<int>> matrix)
{
    for (auto row : matrix)
    {
        for (auto element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    std::cout << "matrix before transpose : " << std::endl;
    print_matrix(matrix);
    std::cout << "new transposed matrix : " << std::endl;
    std::vector<std::vector<int>> new_matrix = transpose(matrix);
    print_matrix(new_matrix);

    return 0;
}