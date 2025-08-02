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
        int n;
        cin >> n;
        if(n <= 2) cout << "NO" << endl; 
        else if((n & (n-1)) == 0) {
            cout << "YES" << endl;
            
        } else  {
            cout << "NO" << endl;
        } 
    }
    
    return 0;
}