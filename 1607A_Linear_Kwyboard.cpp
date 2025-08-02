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
        string a,b;
        cin >> a >> b;
        vector<int> v;
        map<char,int> m;
        int x =1;
        for(auto i : a) {
            m[i] = x;
            x++;
        }
        int count = 0;
        for(auto i : b) {
            v.push_back(m[i]);
        }

        for(int i = 1;i < v.size();i++) {
            count += (abs(v[i] - v[i-1]));
        }
        cout << count << endl;
    }
    return 0;
}