#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,b,n;
        cin >> a >> b >> n;
        int ops = 0;
        while((a + b <= n)) {
            if(a >= b) {
                b += a;
            } else {
                a += b;
            }
            ops++;
        }
        cout << ops + 1 << endl;
    }
    return 0;
}