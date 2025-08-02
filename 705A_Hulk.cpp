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
    string one = "I hate ";
    string two  = "that ";
    string three = "I love ";
    string output = "";
    int x = 0;
    for(int i = 1;i <= t;i++) {
        if(i % 2 != 0) {
            output += one;
        }
        else {
            output += three;
        }
        if(x < t-1) {
            output+=two;
            x++;
        }
    }  
    output += "it";
    cout << output << endl;
    return 0;
}