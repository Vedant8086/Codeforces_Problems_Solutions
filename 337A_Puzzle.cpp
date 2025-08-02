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
    int m,n;
    cin >> m >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    m--;
    int mini = INT_MAX;
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++) {
        if(i + m <= n- 1) {
            mini = min(mini,v[i+m] - v[i]);
        }
    }
    cout << mini << endl;
    return 0;
}