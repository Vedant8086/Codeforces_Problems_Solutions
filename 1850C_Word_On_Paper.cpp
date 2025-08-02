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
        string s = "";
        char ch;
        for(int i = 0;i < 8;i++) {
            for(int j = 0;j < 8;j++) {
                cin >> ch;
                if(ch != '.') {
                    s += ch;
                }
            }
        }
        cout << s << endl;
    } 
    return 0;
}