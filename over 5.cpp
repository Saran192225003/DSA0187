#include<iostream>
#include<vector>

class MatrixMultiplier {
private:
    std::vector<std::vector<int>> matrix;

public:
    MatrixMultiplier(const std::vector<std::vector<int>>& mat) : matrix(mat) {}

    // Overloading the * operator for matrix multiplication
    MatrixMultiplier operator*(const MatrixMultiplier& other) const {
        // Matrix multiplication logic
        // (Not a complete implementation for brevity)
        MatrixMultiplier result(/* Resultant matrix */);
        return result;
    }
};

int main() {
    MatrixMultiplier mat1({{1, 2}, {3, 4}});
    MatrixMultiplier mat2({{5, 6}, {7, 8}});
    MatrixMultiplier result = mat1 * mat2; // Using overloaded * operator

    return 0;
}

