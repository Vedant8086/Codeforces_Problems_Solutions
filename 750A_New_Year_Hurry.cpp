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
    int n,k;
    cin >> n >> k;
    int rem_time = 240 - k;
    int count = 0;
    int i = 1;
    while(rem_time - (5 * i) >= 0 && i <= n) {
        rem_time -= (5 * i);
        i++;
        count++;
    }
    cout << count << endl;
    return 0;
}