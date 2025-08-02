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
        if(c % 2 == 0) {
            if(a == b) {
                cout << "Second" << endl;
            } else if(a > b) {
                cout << "First" << endl;
            } else {
                cout <<  "Second" << endl;
            }
        } else {
            if(a == b) {
                cout << "First" << endl;
            } else if(a > b) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        }
    }
    return 0;
}