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
        vector<int> a(n,0);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        int a1 = *max_element(a.begin(),a.end());
        int a2 = *min_element(a.begin(),a.end());
        cout << a1 - a2 << endl;
    }
    return 0;
}