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
        vector<int> x(n);
        int mini = INT_MAX;
        for(int i = 0;i < n;i++) {
            cin >> x[i];
            if(mini > x[i]) {
                mini = x[i];
            }
        }
        bool isAdd = true;
        long long prod = 1;
        for(int i = 0;i < n;i++) {
            if(x[i] == mini && isAdd) {
                prod *= (mini + 1);
                isAdd = false;
            } else {
                prod *= x[i];
            }
        }
        cout << prod << endl;
    }
    return 0;
}