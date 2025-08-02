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
    int  t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;
        int i = 1,j = 2;
        int floor = 1;
        if(n <= 2) cout << 1 << endl;
        else{
            while(true) {
                // cout << i << " " << j << endl;
                if(n >= i && n <= j) {
                    cout << floor << endl;
                    break;
                }
                i = j + 1;
                j = (floor * x) + 2;
                floor++;
            }
        }
    }
    return 0;
}