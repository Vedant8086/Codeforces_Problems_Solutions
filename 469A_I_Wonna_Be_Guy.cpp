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
    int n,p,q;
    cin >> n;
    vector<int> v(n,1);
    cin >> p;
    for(int i = 0;i < p;i++) {
        int x;
        cin >> x;
        if(v[x-1] != 0) v[x-1]--;
    }
    cin >> q;
    for(int i = 0;i < q;i++) {
        int x;
        cin >> x;
        if(v[x-1] != 0) v[x-1]--;
    }
    if(accumulate(v.begin(),v.end(),0) == 0) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}