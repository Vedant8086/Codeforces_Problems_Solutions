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
    int test_case;
    cin >> test_case;
    int a,b,c,d;
    int count = 0;
    for(int i = 1;i <= test_case;i++) {
        cin >>  a >> b >> c >> d;
        if(b > a) count++;
        if(c > a) count++;
        if(d > a) count++;
        cout << count << endl;
        count = 0;
    }
    return 0;
}