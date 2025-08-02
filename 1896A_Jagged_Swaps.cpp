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
bool check(vector<int> a) {
    int n = a.size();
    for(int i = 0;i < n-1;i++) {
        if(a[i] > a[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n,0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // vector<int> b(a.begin(), a.end());
        // sort(b.begin(), b.end());
        for(int j = 0;j < n;j++) {
            for(int i = 1;i < n-1;i++) {
                if(a[i] > a[i-1] && a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                }
            }
            // if(a == b) break;
        }
        if(check(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}