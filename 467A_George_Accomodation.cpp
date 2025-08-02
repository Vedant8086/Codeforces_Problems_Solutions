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
    int count = 0;
    while(t--) {
        int p,q;
        cin >> p >> q;
        if((q - p) >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}