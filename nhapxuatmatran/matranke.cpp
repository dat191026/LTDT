#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("MaTranKe.inp");
    if (!inputFile.is_open()) {
        cerr << "Loi mo file dau vao MaTranKe.inp" << endl;
        return 1;
    }

    int n;
    inputFile >> n;

    // Sử dụng vector of vectors để lưu ma trận kề
    vector<vector<int>> adjMatrix(n, vector<int>(n));

    // Đọc ma trận kề từ file
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inputFile >> adjMatrix[i][j];
        }
    }
    inputFile.close();

    // Vector để lưu bậc của mỗi đỉnh
    vector<int> degrees(n, 0);

    // Tính bậc của mỗi đỉnh bằng cách cộng các phần tử trên từng hàng
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            degrees[i] += adjMatrix[i][j];
        }
    }

    // Mở file đầu ra
    ofstream outputFile("MaTranKe.out");
    if (!outputFile.is_open()) {
        cerr << "Loi mo file dau ra MaTranKe.out" << endl;
        return 1;
    }

    // Ghi số đỉnh
    outputFile << n << endl;

    // Ghi bậc của từng đỉnh
    for (int i = 0; i < n; ++i) {
        outputFile << degrees[i] << endl;
    }

    outputFile.close();

    cout << "Chuong trinh da hoan tat. Ket qua duoc ghi vao MaTranKe.out" << endl;

    return 0;
}