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
    string a,b;
    cin >> a >> b;
    string ans = "";
    for(int i = 0;i < a.length();i++) {
        if(a[i] == b[i]) {
            ans += '0';
        } else {
            ans += '1';
        }
    }
    cout << ans << endl;
    return 0;
}