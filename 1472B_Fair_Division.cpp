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
        int one_count = 0;
        int two_count = 0;
        for(int i =0;i < n;i++) {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());

        for(auto i : a) {
            if(one_count <= two_count) {
                one_count+=i;
            } else {
                two_count+=i;
            }
        }
        one_count == two_count ? cout<< "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}