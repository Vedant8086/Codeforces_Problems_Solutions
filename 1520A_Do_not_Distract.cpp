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
        int m1;
        cin >> m1;
        string x;
        cin >> x;
        int flag = 0;
        map<char,int> m;
        m[x[0]]++;
        for(int i = 1;i < x.length();i++) {
            if(m[x[i]] >= 1 && x[i-1] != x[i]) {
                flag = 1;
                break;
            } else {
                m[x[i]]++;
            }
        }
        if(flag == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}