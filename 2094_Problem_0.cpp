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
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        string s = "";
        s += s1[0]; 
        s += s2[0];
        s += s3[0];
        cout << s << endl;
    }
    return 0;
}