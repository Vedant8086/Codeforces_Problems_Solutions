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
    int untreat = 0;
    int police = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++) {
        if(a[i] < 0 && police == 0) {
            untreat++;
        } else if(a[i] < 0 && police > 0) {
            police--;
        } else if(a[i] > 0) police += a[i];
    }
    cout << untreat << endl;
    return 0;
}