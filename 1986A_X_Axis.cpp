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
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;
        int a1 = abs(x1-x1) + abs(x1-x2) + abs(x1-x3);
        int a2 = abs(x2-x1) + abs(x2-x2) + abs(x2-x3);
        int a3 = abs(x3-x1) + abs(x3-x2) + abs(x3-x3);
        cout << min({a1,a2,a3}) <<endl;
    }
    return 0;
}