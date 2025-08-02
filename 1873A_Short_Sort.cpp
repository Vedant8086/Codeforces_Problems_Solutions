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
    cin>> t;
    while(t--) {
        string s;
        cin>>s;
        map<char,int> m;
        for(int i = 0;i <s.length();i++) {
            m[s[i]]=i+1;
        }
        if(m['a'] == 1 || m['b'] == 2 || m['c'] == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}