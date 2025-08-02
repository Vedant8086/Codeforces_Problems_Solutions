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
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        int mixi = max({a,b,c});
        int remains = (mixi - a) + (mixi - b) + (mixi - c);
        if(remains < 0 || remains > n) {
            cout << "NO" << endl;
        }
        else if((n - remains) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}