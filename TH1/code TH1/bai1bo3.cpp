#include <iostream>
#include <string>
#include <map>
#include <algorithm>

void solve() {
    std::string text;
    std::cin >> text;

    if (text.length() < 3) {
        std::cout << 0 << std::endl;
        return;
    }

    std::map<std::string, int> boba_counts;

    
    for (size_t i = 0; i <= text.length() - 3; ++i) {
        std::string boba = text.substr(i, 3);
        boba_counts[boba]++;
    }

    int max_freq = 0;
   
    for (auto const& pair : boba_counts) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
        }
    }

    std::cout << max_freq << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}