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
    int a,b;
    cin >> a >> b;
    int x = min(a,b);
    int y = max(a,b);
    cout << x << " " << (y-x)/2 << endl;
    return 0;
}