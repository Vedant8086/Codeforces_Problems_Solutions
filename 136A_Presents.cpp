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
    cin  >> n;
    vector<int> v(n,0);
    for(int i = 0;i < n;i++) {
        int temp;
        cin >> temp;
        v[temp-1] = i + 1;
    }
    for(int i = 0;i < n;i++) {
        cout << v[i] << " ";
    }
    return 0;
}