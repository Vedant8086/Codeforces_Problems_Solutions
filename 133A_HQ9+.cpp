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
    string s;
    cin >> s;
    map<char,int> m;
    for(auto x:s) {
        m[x]++;
    }
    if(m['H'] > 0 || m['Q'] > 0 || m['9'] > 0) {
        cout << "YES" <<  endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}