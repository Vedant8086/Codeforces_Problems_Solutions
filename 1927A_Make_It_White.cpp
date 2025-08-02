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
        string s;
        cin >> s;
        bool isfirst = true;
        int pos1 = 0,pos2 = 0;
        for(int i = 0;i < s.length();i++) {
            if(s[i] == 'B' && isfirst) {
                pos1 = i;
                isfirst = false;
            } else if(s[i] == 'B') {
                pos2 = i;
            }
        }
        if(pos2 == 0) cout << 1 << endl;
        else cout << (pos2 - pos1) + 1 << endl;
    }
    return 0;
}