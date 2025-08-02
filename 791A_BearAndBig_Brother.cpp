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
    int count = 0;
    while(!(a >  b)) {
        a = a * 3;
        b = b * 2;
        count++;
    }
    cout << count << endl;
    return 0;
}