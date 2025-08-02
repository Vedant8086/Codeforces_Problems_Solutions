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
        for(int i = 1;i <=1700;i++) {
            if(i % 3 != 0) {
                count++;
            }
            else if(i % 10 != 3) {
                count++;
            }

            if(count == n) {
                cout << i << endl;
            }
        }
    }
    return 0;
}