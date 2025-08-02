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
    int capacity = 0;
    int new_MAX = INT_MIN;
    for(int i = 1;i <=n;i++) {
        int a,b;
        cin >> a >> b;
        capacity = capacity - a + b;
        new_MAX = max(new_MAX,capacity);
    }
    cout << new_MAX << endl;
    return 0;
}