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
        int n,k,p,count = 0,sum = 0;
        cin >> n >> k >> p;
        k = abs(k);
        int x1_count = k / p;
        k = k % p;
        if(k < p && k != 0) {
            x1_count++;
        } 

        if(x1_count <= n) {
            cout << x1_count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}