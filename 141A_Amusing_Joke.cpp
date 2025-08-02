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
    string x;
    getline(cin,x);
    string y;
    getline(cin,y);
    string z;
    getline(cin,z);
    map<char,int> m1,m2;
    for(auto i : x) {
        m1[i]++;
    }
    for(auto i : y) {
        m1[i]++;
    }

    for(auto i : z) {
        m2[i]++;
    }

    if(m1 == m2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;   
    }
    return 0;
}