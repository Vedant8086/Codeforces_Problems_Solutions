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
        for(int i = 1;i < 10;i++) {
            unsigned long long num = i;
            while(num <= n) {
                count++;
                num = num * 10 + i;
            }
        }

        cout << count << endl;
    }
    return 0;
}