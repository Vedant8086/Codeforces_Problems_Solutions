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
        int n,count = 0;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0;i < n;i++) {
            cin >> vec[i];
            if(vec[i] % 2 != 0) {
                count++;
            }
        }
        if(count % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}