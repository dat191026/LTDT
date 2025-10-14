#include <iostream>
using namespace std;

int main() {
    long long N;
    // ??c nhi?u dòng (m?i dòng m?t giá tr? N) cho ??n EOF
    while (cin >> N) {
        long long count = 0;
        long long p = 5;
        while (p <= N) {
            count += N / p;
            // Tránh overflow khi nhân p * 5
            if (p > N / 5) break;
            p *= 5;
        }
        cout << count << '\n';
    }
    return 0;
}
