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
    string comaparing = "codeforces";
    while(n--) {
        string x;
        cin >> x;
        int count = 0;
        for(int i = 0;i < x.length();i++) {
            if(x[i] != comaparing[i]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}