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
    map<char,int> m;
    m['T']++;
    m['i']++;
    m['m']++;
    m['u']++;
    m['r']++;
    while(t--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        map<char,int> mx;
        for(int i=0;i<n;i++) {
            mx[x[i]]++;
        }

        if(m == mx) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}