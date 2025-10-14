#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nx, ny, nz;

    // Đọc và lưu dãy x
    cin >> nx;
    vector<int> x(nx);
    for (int i = 0; i < nx; ++i) {
        cin >> x[i];
    }

    // Đọc và lưu dãy y
    cin >> ny;
    vector<int> y(ny);
    for (int i = 0; i < ny; ++i) {
        cin >> y[i];
    }

    // Đọc và lưu dãy z
    cin >> nz;
    vector<int> z(nz);
    for (int i = 0; i < nz; ++i) {
        cin >> z[i];
    }

    // Sắp xếp các mảng
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    sort(z.begin(), z.end());

    int i = 0, j = 0, k = 0;
    int common_count = 0;
    int last_common = -1; // Biến để loại bỏ trùng lặp khi đếm

    while (i < nx && j < ny && k < nz) {
        if (x[i] == y[j] && y[j] == z[k]) {
            // Tìm thấy phần tử chung
            if (x[i] != last_common) {
                common_count++;
                last_common = x[i];
            }
            i++;
            j++;
            k++;
        }
        else if (x[i] <= y[j] && x[i] <= z[k]) {
            i++;
        }
        else if (y[j] <= x[i] && y[j] <= z[k]) {
            j++;
        }
        else {
            k++;
        }
    }

    // In ra số lượng phần tử chung
    cout << common_count << endl;

    return 0;
}