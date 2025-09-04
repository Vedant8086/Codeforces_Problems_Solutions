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
        string s;
        cin >> s;
        map<char,int> m;
        int x = 0;
        char yy;
        for(int i = 0;i < s.length();i++) {
            m[s[i]]++;
            if(s[i] != s[x]) {
                yy = i;
            }
        }
        if(m.size() < 2) {
            cout << "NO" << endl;
        } else {
            swap(s[yy],s[x]);
            cout << "YES" << endl << s << endl;
        }
    }
    return 0;
}