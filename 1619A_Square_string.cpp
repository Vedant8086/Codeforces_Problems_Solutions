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
        string x;
        cin >> x;
        int n = x.length();
        if(n % 2 != 0) cout << "NO" << endl;
        else {
            string x1 = x.substr(0,n/2);
            string x2 = x.substr(n/2,n);
            if(x1 == x2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    } 
    return 0;
}