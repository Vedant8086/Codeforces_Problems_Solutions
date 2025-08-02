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
    int n,m;
    cin >> n >> m;
    // vector<vector<char>> arr(n,vector<char>(m,'.'));
    char c;
    bool isColor = false;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> c;
            if(c == 'C' || c == 'M' || c == 'Y') {
                isColor = true;

            }
        }
    }
    if(isColor) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }
    return 0;
}