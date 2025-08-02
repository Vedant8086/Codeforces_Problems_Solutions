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
    for(int i = 1;i <= n /2;i++) {
        int temp = n - i;
        if(temp % i == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}