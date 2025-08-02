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
        int n;
        cin >> n;
        vector<int> a(n,0),b(n,0);
        int mini1 = INT_MAX,mini2 = INT_MAX;
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            mini1 = min(mini1,a[i]);
        } 
        for(int j = 0;j < n;j++) {
            cin >> b[j];
            mini2 = min(mini2,b[j]);
        }
        unsigned long long steps = 0;
        for(int i = 0;i < n;i++) {
            int x1 = a[i] - mini1;
            int x2 = b[i] - mini2;
            steps += max(x1,x2);
        }

        cout << steps << endl;
    }
    return 0;
}