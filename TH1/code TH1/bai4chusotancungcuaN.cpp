#include <iostream>
using namespace std;

int main() {
    long long N;
    // ??c nhi?u d�ng (m?i d�ng m?t gi� tr? N) cho ??n EOF
    while (cin >> N) {
        long long count = 0;
        long long p = 5;
        while (p <= N) {
            count += N / p;
            // Tr�nh overflow khi nh�n p * 5
            if (p > N / 5) break;
            p *= 5;
        }
        cout << count << '\n';
    }
    return 0;
}
