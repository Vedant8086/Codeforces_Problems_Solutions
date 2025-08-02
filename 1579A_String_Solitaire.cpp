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
        string a;
        cin >> a;
        map<char,int> m;
        for(auto i : a) {
            m[i]++;
        }

        bool isTrue = true;
        while(isTrue) {
            if(m['A'] != 0 && m['B'] != 0) {
                m['A']--;
                m['B']--;
            } else if(m['B'] != 0 && m['C'] != 0) {
                m['B']--;
                m['C']--;
            } else {
                isTrue = false;
            }
        }

        if(m['A'] == 0 && m['B'] == 0 && m['C'] == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}