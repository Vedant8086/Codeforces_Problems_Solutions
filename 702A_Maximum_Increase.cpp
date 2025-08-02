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
    vector<int> v(n);
    int count = 1,mixi = INT_MIN;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        if(i > 0) {
            if(v[i-1] < v[i]) {
                count++;
                mixi = max(count,mixi);
            } else {
                count = 1;
            }
        }
    }
    mixi = max(mixi,count);
    cout << mixi << endl;
    return 0;
}