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
    int a,b,c;
    for(int i = 1;i<=test_case;i++) {
        cin >> a >> b >> c;
        if(a + b == c) cout << "+" << endl;
        if(a - b == c) cout << "-" << endl;
    }
    return 0;
}