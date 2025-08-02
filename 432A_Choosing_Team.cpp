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
    int n,x;
    cin >> n >> x;
    vector<int> v(n,0);
    int count = 0;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        if(v[i] < 5) {
            if(5 - v[i]>= x) {
                count++;
            }
        }
    }
    if(count >= 3) cout << count / 3 << endl;
    else cout << 0 << endl;
    return 0;
}