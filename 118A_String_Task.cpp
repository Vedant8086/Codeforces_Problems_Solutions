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
    string test;
    cin >> test;
    string xs = "";
    transform(test.begin(),test.end(),test.begin(),::tolower);
    for(auto x : test) {
        if(x != 'a' && x != 'o' && x != 'y' && x != 'e' && x != 'u' && x != 'i') {
            xs += x;
        }
    }
    string finalls="";
    for(auto m : xs) {
        finalls += ".";
        finalls += m;
    }
    cout << finalls << endl;



    return 0;
}