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
        string ans = "";
        ans += s[0];
        ans += s[1];
        for(int i = 3;i < s.length();i++) {
            if(i % 2 != 0) {
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}