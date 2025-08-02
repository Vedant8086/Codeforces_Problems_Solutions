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
        int n,x,y;
        cin >> n;
        cin >> x >> y;
        int m = min(x,y);
        cout << (n+m-1)/m << endl;
    }
    return 0;
}