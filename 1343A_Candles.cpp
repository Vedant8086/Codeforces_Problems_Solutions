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
        int n;
        cin >> n;
        int x;
        for(int k = 2;k<=35;++k) {
            int den = pow(2,k) - 1;
            if(n % den) continue;
            x = n /den;
        }
        cout << x << endl;
    }
    return 0;
}