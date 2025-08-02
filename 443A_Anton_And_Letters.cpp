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
    getline(cin,s);
    map<char,int> m;
    for(auto i : s) {
        if(i >= 'a' && i <= 'z') {
            m[i]++;
        }
    }   
    int count = 0;
    for(auto i : m) {
        if(i.second >= 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}