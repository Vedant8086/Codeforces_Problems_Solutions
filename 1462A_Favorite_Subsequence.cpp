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
        int l = 0,r = n - 1;
        vector<int> v(n,0);
        for(int i = 0;i < n;i++) {
            cin >> v[i];
        }
        vector<int> aa(n,0);
        int i = 0;
        while(l <= r) {
            if(i % 2 == 0) {
                aa[i] = v[l];
                l++;
            } else {
                aa[i] = v[r];
                r--;
            }
            i++;
        }
        for(auto i : aa) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}