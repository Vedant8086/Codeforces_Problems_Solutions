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
    int number,k;
    cin >> number >> k;
    for(int i = 1;i <= k;i++) {
        if(number % 10 == 0) {
            number = number / 10;
        }
        else {
            number--;
        }
    }
    cout << number << endl;
    return 0;
}