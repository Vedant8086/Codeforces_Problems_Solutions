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
int digi(int num) {
    int d = 0;
    while(num != 0) {
        num /= 10;
        d++;
    }
    return d;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ee = n % 10;
        int dd = digi(n);
        if(dd == 1) {
            cout << ((ee - 1) * 10) + 1 << endl; 
        } else if(dd == 2) {
            cout << (((ee - 1) * 10) + 3) << endl; 
        } else if(dd==3) {
            cout << ((ee - 1) * 10) + 6 << endl; 
        } else {
            cout << ((ee - 1) * 10) + 10 << endl; 
        }
    }
    return 0;
}