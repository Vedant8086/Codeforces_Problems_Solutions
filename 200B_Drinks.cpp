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
    double n;
    cin >> n;
    vector<double> a(n);
    double cocktail = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        cocktail += (a[i] / 100);
    }
    cout << setprecision(14) << double(cocktail / n) * 100 << endl;
    return 0;
}