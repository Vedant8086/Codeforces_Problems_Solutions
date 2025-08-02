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
    int x = 0;
    int statements;
    cin >> statements;
    for(int i = 0;i < statements;i++) {
        string temp;
        cin >> temp;
        if(temp[0] == '+') {
            ++x;
        }
        else if(temp[0] == '-') {
            --x;
        }
        else if(temp[0]=='X' && temp[1]=='+') {
            x++;
        }
        else if(temp[0]=='X' && temp[1]=='-'){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}