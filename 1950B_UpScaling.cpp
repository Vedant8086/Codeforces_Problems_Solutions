#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int N = 2 * n;

        for (int i = 0; i < N; i++) {
            int blockRow = i / 2;  
            string row = "";

            for (int j = 0; j < N; j++) {
                if ((blockRow + j) % 2 == 0)
                    row += "##";
                else
                    row += "..";
            }

            cout << row << "\n";
            cout << row << "\n";
        }
    }
    return 0;
}
