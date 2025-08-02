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
        int x;
        cin >> x;
        string s;
        cin >> s;
        int n = s.size();
        int iter = 0;
        int ans = 0,flag = 0;
        for(int i = 0;i < n;i++) {
            if(s[i] == '.') {
                iter++;
            } 
            if(iter == 3) {
                ans = 2;
                flag = 1;
                break;
            } else if(s[i] == '#'){
                ans += iter;
                iter = 0;
            }
        }
        if(flag == 0) ans += iter;
        cout << ans << endl;
    }
    return 0;
}