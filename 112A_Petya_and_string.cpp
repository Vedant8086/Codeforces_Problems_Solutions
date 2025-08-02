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
    string s1,s2;
    cin >> s1;
    cin >> s2;
    for(auto& x : s1) {
        x = tolower(x);
    }
    for(auto& x : s2) {
        x = tolower(x);
    }
    if(s1 == s2) {
        cout << "0" << endl;
    }
    else if(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())) {
        cout << "-1" << endl;
    }
    else {
        cout << "1" << endl;
    }
    return 0;
}