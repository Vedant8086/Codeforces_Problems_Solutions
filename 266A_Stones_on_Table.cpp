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
    string x;
    cin >> x;
    int cnt = 0;
    for(int i =0;i< n;i++){
        if(x[i] == x[i+1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}