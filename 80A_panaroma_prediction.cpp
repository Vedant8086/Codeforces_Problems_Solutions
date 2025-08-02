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
bool isPrime(int n) {
    for(int i = 2;i * i <= n;i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
bool panaroma(int m,int n) {
    int x = 0;
    for(int i = m+1;i <= m+100;i++) {
        if(isPrime(i)) {
            x = i;
            break;
        }
    }
    if(x == n) return true;
    else {
        return false;
    }
}
int main() {
    int m,n;
    cin >> m >> n;
    if(panaroma(m,n)) {
        cout << "YES" << endl;
    }   
    else {
        cout << "NO" << endl;
    }
    return 0;
}