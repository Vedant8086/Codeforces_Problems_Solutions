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
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}