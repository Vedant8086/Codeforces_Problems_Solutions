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
    long long n;
    cin  >> n;
    string s = to_string(n);
    for(int i = 0;i < s.size();i++) {
        if(s[i] == '9' && i == 0) {
            continue;
        }
        if(s[i] >= '5') {
            s[i] = '9' - s[i] + '0';
        }
    }
    cout << s << endl;
    return 0;
}