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
        map<int,int> m;
        for(int i = 0;i < n;i++) {
            int temp;
            cin >>  temp;
            m[temp]++;
        }
        bool isEnter = false;
        for(auto i : m) {
            if(i.second >= 3) {
                cout << i.first << endl;
                isEnter = true;
                break;
            }
        }
        if(!isEnter) {
            cout << -1 << endl;
        }

    }
    return 0;
}