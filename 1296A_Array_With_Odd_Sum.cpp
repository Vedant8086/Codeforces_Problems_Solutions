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
        long long sum = 0;
        long long odd = 0,even = 0;
        for(int i = 0;i < n;i++) {
            int temp;
            cin >> temp;
            (temp % 2 == 0) ? even++ : odd++;
        }
        if(odd >=1 && (even >= 1 || n % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}