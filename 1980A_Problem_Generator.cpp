#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        string s;
        cin >> n >> m;
        cin >> s;
        int arr[7] = {0};
        for(auto i : s) {
            arr[int(i) - 65]++;
        }
        int ans = 0;
        for(int i : arr) {
            if(i < m) {
                ans += (m - i);
            }
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}