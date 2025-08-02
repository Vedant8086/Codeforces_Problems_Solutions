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
        int m,a,b,c;

        cin >> m >> a >> b >> c;
        int row1 = min(m,a);
        int row2 = min(m,b);
        
        int remain_seats = (2 * m) - row1 - row2;
        int row_x = min(remain_seats,c);

        cout << (row1 + row2 + row_x) << endl;

    }
    return 0;
}