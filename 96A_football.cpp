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
    string s;
    cin >> s;
    int count = 1;
    bool flag = false;
    for(int i = 0;i < s.size();i++) {
        if(s[i] == s[i+1]) {
            count++;
        } else {
            count = 1;
        }

        if(count >= 7) {
            flag = true;
            break;
        }
    }

    if(flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}