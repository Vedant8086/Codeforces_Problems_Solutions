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
    vector<int> v(n,0);
    for(int i = 0;i < n;i++) {
        cin >> v[i];
    }
    int count = 0;
    for(int i = 1;i < n;i++) {
        if(v[i] != v[i-1]) {
            count++;
        }
    }
    cout << count + 1 << endl;
    return 0;
}