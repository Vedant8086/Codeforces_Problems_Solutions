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
        int x1 = (x[0]-'0') + (x[1]-'0') + (x[2]-'0');
        int x2 = (x[3]-'0') + (x[4]-'0') + (x[5]-'0');
        x1 == x2 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}