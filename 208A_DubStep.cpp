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
    string ans = "";
    bool space = false;
    for(int i = 0;i < s.size();i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i+=2;
            if(ans.length() > 0 && space) {
                ans += " ";
                space = false;
            }
        } else {
            ans += s[i];
            space = true;
        }
    }
    cout << ans << endl;
    return 0;
}