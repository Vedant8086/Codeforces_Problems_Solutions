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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int> v(d + 1,0);
    for(int i = 1;i < d + 1;i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            v[i] = 1;
        }
    }
    int count = 0;
    for(int i = 1;i < d + 1;i++) {
        if(v[i] == 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}