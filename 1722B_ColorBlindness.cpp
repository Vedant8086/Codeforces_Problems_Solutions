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
        string a,b;
        cin >> a >> b;
        bool isBlind = true;
        for(int i = 0;i < n;i++) {
            if((a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G') || (a[i] == b[i])) {
                isBlind = true;
            } else {
                isBlind = false;
                break;
            }
        }
        if(isBlind) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}