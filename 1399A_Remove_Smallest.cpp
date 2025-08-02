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
        vector<int> a(n);
        for(int i =0;i<n;i++) {
            cin >> a[i];
        }
        if(n == 1) {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(),a.end());
        for(int i = 0;i < n-1;i++) {
            if(abs(a[i+1] - a[i]) <= 1) {
                int ss = min(a[i+1],a[i]);
                if(ss==a[i]) {
                    a[i] = 0;
                } else {
                    a[i+1] = 0;
                }
            }
        }

        int count = 0;
        for(int i = 0;i < n;i++) {
            if(a[i] != 0) count++; 
        }

        (count == 1) ? cout << "YES" << endl : cout << "NO" << endl; 
    }
    return 0;
}