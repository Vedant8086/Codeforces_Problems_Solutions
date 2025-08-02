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
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int i = 0;
    int s = 0,d = 0;
    int l = 0,r = n - 1;
    while(l <= r && i <= n - 1) {
        if(i % 2 == 0) {
            if(a[l] < a[r]) {
                s += a[r];
                r--;
            } else {
                s+= a[l];
                l++;
            }
        } else {
            if(a[l] < a[r]) {
                d += a[r];
                r--;
            } else {
                d += a[l];
                l++;
            }
        }
        i++;
    }
    cout << s << " " << d << endl;
    return 0;
}