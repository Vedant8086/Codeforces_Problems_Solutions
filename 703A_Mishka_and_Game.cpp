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
    int m = 0,c = 0;
    while(t--) {
        int a,b;
        cin >> a >> b;
        if(a > b) {
            m++;
        } else if(a == b) {
            continue;
        } else {
            c++;
        }
    }
    if(m > c) {
        cout << "Mishka" << endl;
    } else if(m < c) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}