#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int oldestLeaves = n - k + 1;
        int totalLeaves = (oldestLeaves + n) * (n - oldestLeaves + 1) / 2;
        if (totalLeaves % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}