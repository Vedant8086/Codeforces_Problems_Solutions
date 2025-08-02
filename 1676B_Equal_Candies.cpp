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
        vector<int> v(n);
        int mini = INT_MAX;
        for(int i = 0;i < n;i++) {
            cin >> v[i];
            if(mini > v[i]) {
                mini = v[i];
            }
        }
        long long sum = 0;
        for(auto i : v) {
            if(i != mini) {
                sum += (i - mini);
            }
        }
        cout << sum << endl;
    }
    return 0;
}