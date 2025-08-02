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
    string maths;
    cin  >> maths;
    vector<int> a;
    for(auto i : maths) {
        if(i != '+') {
            int x = i - '0';
            a.push_back(x);
        }
    }
    sort(a.begin(),a.end());
    string ans = "";
    for(auto i : a) {
        ans += to_string(i);
        ans += '+';
    }
    cout << ans.substr(0,ans.length()-1) << endl;
    return 0;
}