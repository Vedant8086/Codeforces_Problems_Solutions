#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Bottle {
    int brand, cost;
};

bool cmp(const Bottle& a, const Bottle& b) {
    return a.cost > b.cost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<Bottle> bottles(k);
        for (int i = 0; i < k; ++i) {
            cin >> bottles[i].brand >> bottles[i].cost;
        }

        sort(bottles.begin(), bottles.end(), cmp);

        vector<int> shelf_brands(n, -1); // -1 indicates an empty shelf
        long long total_cost = 0;

        for (const Bottle& bottle : bottles) {
            bool placed = false;
            for (int i = 0; i < n; ++i) {
                if (shelf_brands[i] == -1 || shelf_brands[i] == bottle.brand) {
                    shelf_brands[i] = bottle.brand;
                    total_cost += bottle.cost;
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                break;
            }
        }

        cout << total_cost << endl;
    }

    return 0;
}