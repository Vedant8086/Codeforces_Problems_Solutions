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
bool isDivide(long long n) {
    while(!(n&1))n>>=1;
    if(n==1) return false; else return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if(isDivide(n)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
    
}