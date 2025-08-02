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
    int count = 0;
    map<int,int> m;
    for(int i = 0;i < 4;i++) {
        int x;
        cin >> x;
        m[x]++;
        if(m[x] > 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}