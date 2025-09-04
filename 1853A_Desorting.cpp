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
        vector<int> v(n,0);
        int diff = INT_MAX;
        bool flag = false;
        for(int i = 0;i < n;i++) {
            cin >> v[i];
            if(i > 0) {
                if(v[i-1] > v[i]) {
                    cout << 0 << endl;
                    flag = true;
                    break; 
                } else {
                    diff = min(abs(v[i-1] - v[i]),diff);
                }
            }
        }

        if(!flag) {
            cout << (diff / 2) + 1 << endl;
        }

    }
    return 0;
}