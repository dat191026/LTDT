#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    vector<bool> check(N + 1, false); // check[1..N]

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        int x = a[i];
        if (x < 1 || x > N || check[x]) {
            cout << "NO";
            return 0;
        }
        check[x] = true;
    }

    cout << "YES";
    return 0;
}
