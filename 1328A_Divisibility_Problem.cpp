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
    int test_case;
    cin >> test_case;
    long long int a, b;
    for(int i = 1;i <= test_case;i++) {
        cin >> a >> b;
        if(a % b == 0) {
            cout << 0 << endl;
        }
        else {
            cout << abs(b - (a % b)) << endl;
        }
    }
    return 0;
}