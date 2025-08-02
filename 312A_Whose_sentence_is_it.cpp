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
string out = "OMG>.< I don't know!";
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        getline(cin,s);
        cout << s.substr(0,5) << endl << s.substr(s.length()-5,s.length()) << endl;
        if(s.substr(0,5) == "miao." && s.substr(s.length()-5,s.length()) == "lala.") {
            cout << out << endl;
        } else if(s.substr(0,5) != "miao." || s.substr(s.length()-5,s.length()) != "lala.") {
            cout << out<< endl;
        } else if(s.substr(0,5) == "miao.") {
            cout << "Rainbow's" << endl;
        } else {
            cout << "Freda's" << endl;
        }
    }
    return 0;
}