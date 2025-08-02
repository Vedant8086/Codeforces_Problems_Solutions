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
    int count = 0;
    while(n != 0) {
        if(n >= 100) {
            count += n /100;
            n = n % 100;
        } else if(n >= 20) {
            count += n / 20;
            n = n % 20;
        } else if(n >= 10) {
            count += n /10;
            n = n % 10;
        } else if(n >= 5) {
            count += n / 5 ;
            n = n % 5;
        } else {
            count += n / 1;
            n = n % 1;
        }
    }
    cout << count << endl;
    return 0;
}