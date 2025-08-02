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
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        if(x1 == x2) {
            cout << int(pow(abs(y2-y1),2)) << endl;
        } else if(x1 == x3) {
            cout << int(pow(abs(y3-y1),2)) << endl;
        } else {
            cout << int(pow(abs(y4-y1),2)) << endl;
        }

    }
    return 0;
}