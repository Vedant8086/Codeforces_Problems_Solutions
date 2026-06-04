#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n), z(n);
    for(int i = 0;i < n;i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    int sum_x = accumulate(x.begin(), x.end(), 0);
    int sum_y = accumulate(y.begin(), y.end(), 0);  
    int sum_z = accumulate(z.begin(), z.end(), 0);
    if(sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}