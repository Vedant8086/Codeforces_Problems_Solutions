#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int max_ab = max(b, c);
        int max_bc = max(a, c);
        int max_ac = max(a, b);

        int x = (a > max_ab) ? 0 : max_ab - a + 1;
        int y = (b > max_bc) ? 0 : max_bc - b + 1;
        int z = (c > max_ac) ? 0 : max_ac - c + 1;

        cout << x << " " << y << " " << z << "\n";
    }

    return 0;
}
