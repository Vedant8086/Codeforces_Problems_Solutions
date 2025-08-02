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
    int point;
    cin >> point;
    int count = 0;
    while(point != 0) {
        int temp = int(point / 5);
        point = point - (temp * 5);
        count += temp;
        if(point < 5 && point > 0) {
            count++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}