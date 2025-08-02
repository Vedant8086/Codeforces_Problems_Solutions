#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> gold(n);
        for (int i = 0; i < n; i++) {
            cin >> gold[i];
        }

        int robinGold = 0;
        int peopleGivenGold = 0;

        for (int i = 0; i < n; i++) {
            if (gold[i] >= k) {
                robinGold += gold[i];
            } else if (gold[i] == 0 && robinGold > 0) {
                robinGold--;
                peopleGivenGold++;
            }
        }

        cout << peopleGivenGold << endl;
    }

    return 0;
}