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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        bool flag = false;
        for(int i = 0;i < n;i++) {
            cin >> a[i];
            if(a[i] == k) {
                flag = true;
            }
        }
        flag ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}