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
        string x;
        cin >> x;
        string ans = "";
        int n = x.length();
        for(int i = n - 1;i>=0;i--) {
            if(x[i] == 'p') {
                ans += 'q';
            } else if(x[i] == 'q') {
                ans += 'p';
            } else {
                ans += x[i];
            }
        }

        cout << ans <<endl;
    }
    return 0;
}