#include<iostream>
#include<vector>

template<typename T>
std::vector<T> sum(const std::vector<T>& arr1, const std::vector<T>& arr2) {
    if (arr1.size() != arr2.size()) {
        std::cerr << "Error: Array sizes do not match.\n";
        return std::vector<T>();
    }

    std::vector<T> result(arr1.size());
    for (size_t i = 0; i < arr1.size(); ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    return result;
}

template<typename T>
std::vector<std::vector<T>> sum(const std::vector<std::vector<T>>& mat1, const std::vector<std::vector<T>>& mat2) {
    if (mat1.size() != mat2.size() || mat1[0].size() != mat2[0].size()) {
        std::cerr << "Error: Matrix dimensions do not match.\n";
        return std::vector<std::vector<T>>();
    }

    std::vector<std::vector<T>> result(mat1.size(), std::vector<T>(mat1[0].size()));
    for (size_t i = 0; i < mat1.size(); ++i) {
        for (size_t j = 0; j < mat1[0].size(); ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    return result;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};
    std::vector<int> resultArr = sum<int>(arr1, arr2);

    std::vector<std::vector<int>> mat1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> mat2 = {{5, 6}, {7, 8}};
    std::vector<std::vector<int>> resultMat = sum<int>(mat1, mat2);

    return 0;
}

