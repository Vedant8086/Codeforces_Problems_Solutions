#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
    }

    long long min_coins = -1;
    for (int target = 0; target <= 100; ++target) {
        long long current_coins = 0;
        for (int i = 0; i < n; ++i) {
            current_coins += std::abs(x[i] - target) % 2;
        }
        if (min_coins == -1 || current_coins < min_coins) {
            min_coins = current_coins;
        }
    }

    long long even_count = 0;
    long long odd_count = 0;

    for (int i = 0; i < n; ++i) {
        if (x[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    std::cout << std::min(even_count, odd_count) << std::endl;

    return 0;
}