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
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;
        int flag = 0;
        for(int i = 0;i <=6;i++) {
            size_t found = x.find(s);
            if(found != string::npos) {
                cout << i << endl;
                flag = 1;
                break;
            }
            x += x;
        }
        if(flag == 0) {
            cout << -1 << endl;
        }
    }
    return 0;
}