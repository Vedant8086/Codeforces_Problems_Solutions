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
        string x = s.substr(0,2);
        string ans = "";
        if(stoi(x) > 12) {
            int sc = stoi(x) - 12;
            if(sc < 10) {
                ans += '0';
                ans += to_string(sc);
            }
            else ans += to_string(sc);
            ans += ':';
            ans += s.substr(3);
            ans += " ";
            ans += "PM";
        } else {
            if(x == "00") {
                ans += "12";
                ans += ":";
                ans += s.substr(3);
                ans += " ";
                ans += "AM";
            } else {
                ans += s;
                ans += " ";
                if(x == "12") ans += "PM";
                else ans += "AM";
            }
        }

        cout << ans << endl;
    }
    return 0;
}