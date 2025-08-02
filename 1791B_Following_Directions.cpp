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
        string s;
        cin >> s;
        int x = 0,y = 0;
        bool isPassed = false;
        for(auto i : s) {
            if(i == 'U') {
                y++;
            } else if(i == 'D') {
                y--;
            } else if(i == 'R') {
                x++;
            } else {
                x--;
            }


            if(x == 1 && y == 1) {
                cout << "YES" << endl;
                isPassed = true;
                break;
            }
        }
        if(!isPassed) {
            cout << "NO" << endl; 
        }
    }
    return 0;
}