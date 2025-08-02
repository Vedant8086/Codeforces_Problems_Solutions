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
    string word;
    cin >> word;
    int lower = 0,upper = 0;
    for(auto& x : word) {
        if(islower(x)) lower++;
        else upper++; 
    }
    if(lower >= upper) {
        for(auto& x : word) {
            x = tolower(x);
        }
    }
    else {
        for(auto& x : word) {
            x = toupper(x);
        }
    }
    cout << word << endl;
    return 0;
}