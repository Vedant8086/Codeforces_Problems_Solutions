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
        int n,k;
        cin >> n >> k;
        vector<int> a(n,0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = 0;
        if(k == 1) {
            if(check(a)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        else {
            for (int step = 0; step < n -1; ++step) {
                for (int i = 0; i < n - step - 1; ++i) {
                  if (a[i] > a[i + 1]) {
                    int temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                  }
                }
            }
            if(check(a)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}