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
    while (t--)
    {
        string x;
        cin >> x;
        int as = 0,bs = 0;
        for(auto i : x) {
            if(i == 'A') as++;
            else bs++;
        }

        if(as > bs) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    
    return 0;
}