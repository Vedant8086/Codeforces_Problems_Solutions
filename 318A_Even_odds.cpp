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
    long long a,b;
    cin >> a >> b;
    long long i = 1;
    long long pos = 1;
    long long j = 2;
    long long x = 0;
    if(a % 2 == 0) x = floor(a/2);
    else x = floor((a)/2) + 1;
    if(b <= x) {
        long long y = i+((b-1) * 2);
        cout << y << endl;
    } else {
        long long y1 = j+((b-x-1) * 2);
        cout << y1 << endl;
    }

    return 0;

}