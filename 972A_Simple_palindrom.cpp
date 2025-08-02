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
        int n;
        cin >> n;
        string s = "";
        string v = "aeiou";
        for(int i = 0;i < 5;i++) {
            for(int j = 0;j < n / 5 + (i < n % 5);++j) {
                s+=v[i];
            }
        }

        cout << s << endl;
    }
    return 0;
}