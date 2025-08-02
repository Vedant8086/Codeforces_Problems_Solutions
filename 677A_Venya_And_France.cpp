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
    int n,h;
    cin  >> n >> h;
    vector<int> a(n);
    int w = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] > h) {
            w += 2;
        } else {
            w += 1;
        }
    }

    cout << w << endl;

    return 0;
}