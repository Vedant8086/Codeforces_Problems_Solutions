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
    if(n > 0) {
        cout << n << endl;

    } else {
        int x =abs(n);
        int x1 = x % 10;
        int x2 = (x / 10) % 10;
        if(x1 > x2) {
            cout << -1 * (x / 10) << endl;
        } else {
            cout << -1 * (x / 100 * 10 + x1) << endl;
        }
    }
    return 0;
}