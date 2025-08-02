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
        int a,b;
        cin >> a >> b;
        if(b == a) {
            cout << 0 << endl;
        } else if(b > a) {
            if(abs(b-a) % 2 != 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else {
            if(abs(b-a) % 2 != 0) {
                cout << 2 << endl;
            } else { 
                cout << 1 << endl;
            }
        }
    }
    return 0;
}