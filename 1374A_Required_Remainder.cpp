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
        int x,y,n;
        cin >> x >> y >> n;
        int temp = n / x;
        int rr = (x * temp) + y;
        if(rr > n) {
            cout << rr - x << endl;
        } else {
            cout << rr << endl;
        }
    }
    return 0;
}