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
int canhe(string x) {
    int n = x.size();
    for(int i = 0;i < n;i++) {
        if(x[i] == x[i+1]) {
            return 1;
        }
    }

    return n;
} 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << canhe(s) << endl;
    }
    return 0;
}