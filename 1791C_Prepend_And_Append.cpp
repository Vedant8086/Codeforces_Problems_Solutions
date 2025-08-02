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
        int l = 0,r = s.length() - 1;
        while((s[l]=='0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')) {
            l++;
            r--;
        }   
        if(l == r) cout << 1 << endl;
        else if(l > r) cout << 0 <<endl;
        else cout << (r - l + 1) << endl;

    }
    return 0;
}