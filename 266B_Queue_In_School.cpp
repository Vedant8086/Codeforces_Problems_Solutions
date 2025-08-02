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
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i = 1;i <= t;i++) {
        for(int j = 0;j < n-1;j++) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}