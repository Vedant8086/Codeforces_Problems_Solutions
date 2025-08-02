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
        int a,b,c;
        cin >> a >> b >> c;
        int first = abs(a - 1);
        int second = abs(c - b) + abs(c - 1);
        // cout << first << " " << second << endl;
        if(first == second) cout << 3 << endl;
        else if(first < second) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}