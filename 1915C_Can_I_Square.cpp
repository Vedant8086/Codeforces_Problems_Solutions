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
bool isPerfectSquare(long long n) {
    if(n <= 1) {
        return true;
    }

    long long left = 1,right = n;
    while(left <= right) {
        long long mid = left + (right - left) / 2;

        unsigned long long square  = mid * mid; //For very large calculation is best.

        if(square == n) {
            return true;
        } else if(square < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        long long sum = 0;
        for(int i = 0;i < n;i++) {
            cin >> v[i];
            sum += v[i];
        }

        if(isPerfectSquare(sum)) {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}