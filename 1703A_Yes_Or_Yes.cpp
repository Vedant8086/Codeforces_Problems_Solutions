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
    int n;
    cin >> n;
    map<string,int> m;
    m["yes"] = 1;
    m["Yes"] = 1;
    m["YEs"] = 1;
    m["YES"] = 1;
    m["yEs"] = 1;
    m["yES"] = 1;
    m["yeS"] = 1;
    m["YeS"] = 1;
    for(int i = 1;i <= n;i++) {
        string s;
        cin >> s;
        if(m[s] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}