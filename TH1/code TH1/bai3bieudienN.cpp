#include <iostream>
#include <vector>
using namespace std;


vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return primes;
}


int exponentInFactorial(int n, int p) {
    int exp = 0;
    while (n > 0) {
        n /= p;
        exp += n;
    }
    return exp;
}

int main() {
    int N;
    while (cin >> N) {
        vector<int> primes = sieve(N);
        for (int i = 0; i < (int)primes.size(); i++) {
            cout << exponentInFactorial(N, primes[i]);
            if (i < (int)primes.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
