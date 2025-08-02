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
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string x;
    cin >> x;
    int count = 0;
    for(int i = 0;i < x.length();i++) {
        if(x[i] == '1') {
            count+=a1;
        } else if(x[i] == '2') {
            count+=a2;
        } else if(x[i] == '3') {
            count+=a3;
        } else if(x[i] == '4') {
            count+=a4;
        }
    }
    cout << count << endl;
    return 0;
}