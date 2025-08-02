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
    while(n--) {
        int x;
        cin >> x;
        if(x == 1) cout << 1  << " " <<  0 << endl;
        else if(x == 2) cout << 0 << " " << 1 << endl;
        else {
            int ratio = ceil(x / 3);
            int sum = (ratio) + (((x - ratio) / 2) * 2);
            if(sum == x) cout << ratio << " " << (x - ratio) / 2 << endl;
            else cout << ratio + 1 << " " << (x - ratio) / 2 << endl;
        }
    }

    return 0;
}