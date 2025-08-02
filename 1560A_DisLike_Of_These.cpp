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
        int count = 0;
        for(int i = 1;i<=1666;i++) {
            if(i % 3 == 0) {
                continue;
            }
            else if(i % 10 == 3) {
                continue;
            } else count++;

            if(count == n) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}