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
    string x;
    cin  >> x;
    transform(x.begin(),x.end(),x.begin(),::tolower);
    vector<int> x2(26,1);
    for(auto i : x) {
        if(x2[i-'a'] == 0) continue;
        else x2[i-'a']--;
    }

    if(accumulate(x2.begin(),x2.end(),0) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}