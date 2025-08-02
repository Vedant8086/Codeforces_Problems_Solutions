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
        for(int i = 0;i < n;i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int mini = INT_MAX;
        for(int i = n -1;i >= 1;i--) {
            mini = min(mini,v[i] - v[i - 1]);
        }
        cout << mini << endl;
    }
    return 0;
}