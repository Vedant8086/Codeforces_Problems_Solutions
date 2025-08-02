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
    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> v = {a,b,c};
        for(int i = 1;i <= 5;i++) {
            sort(v.begin(),v.end());
            v[0]++;
        }

        unsigned long long ans = v[0] * v[1] * v[2];
        cout << ans << endl;
        

    }
    return 0;
}