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
        int n;
        cin >> n;
        vector<int> a(26,1);
        string x;
        cin >> x;
        int count = 0;
        for(auto i : x) {
            if(a[i-'A'] == 1) {
                count += 2;
                a[i-'A'] = 0;
            } else {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}