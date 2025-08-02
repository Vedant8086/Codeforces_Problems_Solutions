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
    int n;
    cin >> n;
    for(int i = n + 1;i <= 9015;i++) {
        string year = to_string(i);
        if(year[0] != year[1] && year[0] != year[2] && year[0] != year[3] && year[1] != year[2] && year[1] != year[3] && year[2] != year[3]) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}